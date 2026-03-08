# hsoy

Lightweight header-only Structure-of-Arrays (SoA) wrapper for aggregate pointer slices.

## NOTE

This repository is currently focused on a small and practical core:

- Generic `hope::soa::wrapper<TSlice>` for SoA storage.
- Aggregate reflection-based type extraction for pointer fields.
- Minimal examples and assert-based tests.

## Library purpose

`hsoy` helps you store fields in separate arrays while working with a convenient slice-like struct of pointers.

You define an aggregate slice type:

```cpp
struct particle_slice final {
    float* x;
    float* y;
    float* z;
};
```

Then use `hope::soa::wrapper<particle_slice>` to:

- Reserve and resize contiguous SoA storage.
- Add elements and get writable slices.
- Access by index or iterate with range-for.

## `wrapper` vs `wrapper_with_handle`

- `wrapper<TSlice>` is index-based SoA storage. It is best when you process dense arrays and access data by contiguous index.
- `wrapper_with_handle<TSlice, THandle>` adds a handle-to-index map on top of SoA arrays. It is best when your data belongs to OOP objects (entities/components) and you need stable object identity while keeping SoA layout.
- `wrapper_with_handle` supports:
  - `add_get_slice(handle)` to bind a handle to a new SoA row
  - `get_handle(handle)` to access properties by object handle
  - `erase_handle(handle)` with swap-remove semantics for compact storage
  - iteration as `{ handle, slice }` bundles

## System requirements

- C++20 compiler
- CMake 3.16+
- No third-party runtime dependencies

## Build

```bash
cmake -S . -B build
cmake --build build
```

## Tests

The tests use standard C++ `assert` (no GoogleTest):

```bash
cmake --build build --target tests
./build/tests/tests
```

Current test coverage includes:

- `add_get_slice`
- `get` and `operator[]`
- `reserve`, `resize`, `clear`
- iterator behavior
- `wrapper_with_handle` add/get/erase/iteration

## Examples

### Define slice and storage

```cpp
struct instigator final {
    int* x;
    int* y;
    int* z;
};

hope::soa::wrapper<instigator> wrapper;
```

### Push elements with `add_get_slice`

```cpp
wrapper.reserve(10);
for (int i = 0; i < 10; ++i) {
    auto slice = wrapper.add_get_slice();
    *slice.x = i;
    *slice.y = i * 2;
    *slice.z = i * 3;
}
```

### Process data from contiguous slices

```cpp
wrapper.resize(10);
auto begin = wrapper.get(0); // pointer to first element of each field
for (int i = 0; i < 10; ++i) {
    begin.x[i] = i + 1;
    begin.y[i] = i + 2;
    begin.z[i] = i + 3;
}
```

### Iterate with range-for

```cpp
for (auto slice : wrapper) {
    // slice.x, slice.y, slice.z are pointers to current element
    *slice.x += 1;
    *slice.y += 1;
    *slice.z += 1;
}
```

### Use `wrapper_with_handle`

```cpp
hope::soa::wrapper_with_handle<instigator, int> storage;
auto s0 = storage.add_get_slice(1001);
*s0.x = 11;
*s0.y = 22;
*s0.z = 33;

auto s1 = storage.get_handle(1001);
*s1.x += 1;

storage.erase_handle(1001);
```

### Bind OOP object handle to SoA properties

```cpp
struct game_object final {
    int id;
    // other OOP fields: name, state, behavior...
};

struct transform_slice final {
    float* x;
    float* y;
    float* speed;
};

std::vector<game_object> objects = {
    {101}, {102}, {103}
};

hope::soa::wrapper_with_handle<transform_slice, int> transforms;
for (const auto& object : objects) {
    auto slice = transforms.add_get_slice(object.id); // bind object -> SoA row
    *slice.x = 0.0f;
    *slice.y = 0.0f;
    *slice.speed = 1.0f + static_cast<float>(object.id % 3);
}

// Update by object identity, not by array index.
auto hero = transforms.get_handle(102);
*hero.x += *hero.speed;
*hero.y += *hero.speed * 0.5f;

// Remove object 101 from SoA storage.
transforms.erase_handle(101);

// Iterate over compact SoA data while preserving object handle.
for (auto item : transforms) {
    const int object_id = item.handle;
    auto tr = item.slice;
    (void)object_id;
    (void)tr;
}
```

### Build and run bundled example executable

```bash
cmake --build build --target hsoy-examples
./build/examples/hsoy-examples
```

## About

`hsoy` is a compact experimental SoA utility by Gleb Bezborodov, licensed under MIT.

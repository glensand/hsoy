generated = open('generated.h', 'w')

begin = '''
    template <typename T>
    constexpr auto make_tuple(T&& object, Int<'''

for i in range (1, 100):
    generated.write(begin)
    generated.write(str(i))
    generated.write(">) {\n")
    generated.write("        auto&& [")

    bind_args = ""
    tuple_args = ""
    for j in range (0, i):
        if j != 0: 
            tuple_args += ", "
            bind_args += ", "

        tuple_args += "std::ref(_" + str(j) + ")"
        bind_args += "_" + str(j)

    generated.write(bind_args)
    generated.write("] = object;\n")
    generated.write("        return std::make_tuple(")
    generated.write(tuple_args)
    generated.write(");\n")
    generated.write("    }\n")
    
generated.close()

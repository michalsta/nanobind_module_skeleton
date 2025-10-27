#include <iostream>
#include <nanobind/nanobind.h>
#include <nanobind/stl/string.h>

#include "hello.h"

namespace nb = nanobind;
NB_MODULE(XXXXXX_ext, m) {
    m.doc() = "XXXXXX C++ nanobind module";

    m.def("hello", []() {
        std::cout << "Hello from XXXXXX C++ nanobind module!" << std::endl;
    }, "A function that prints a greeting message.");
    m.def("hello_msg", &hello_msg, "A function that returns a greeting message.");
};
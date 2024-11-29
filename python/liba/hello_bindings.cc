#include <pybind11/pybind11.h>
#include "cpp/liba/hello_world.h"

namespace py = pybind11;

PYBIND11_MODULE(hello_bindings, m) {
    m.def("hello_world", &hello_world, "A function that prints 'Hello from C++!'");
}



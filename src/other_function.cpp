#include <pybind11/pybind11.h>

namespace py = pybind11;

int multiply(int i, int j) {
    return i * j;
}

PYBIND11_MODULE(other_module, m) {
    // optional module docstring
    m.doc() = "other example";

    // define add function
    m.def("multiply", &multiply, "A function which multiplies two numbers");
}
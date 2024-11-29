load("@pybind11_bazel//:build_defs.bzl", "pybind_extension")
load("@rules_python//python:defs.bzl", "py_library", "py_binary")

# Build the C++ bindings as a Python extension
pybind_extension(
    name = "hello_bindings",
    srcs = ["hello_bindings.cc"],
    deps = [
        "//cpp/liba:hello_world",  # Link to the C++ library
    ],
    visibility = ["//visibility:public"],
)

# Wrap the bindings in a Python library
py_library(
    name = "hello_lib",
    data = [":hello_bindings"],
    imports = ["."],  # Set the import path for Python
)

# Python binary that uses the library
py_binary(
    name = "hello_wrapper",
    srcs = ["hello_wrapper.py"],
    deps = [":hello_lib"],  # Depend on the library
)

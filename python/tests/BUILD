load("@pybind11_bazel//:build_defs.bzl", "pybind_extension")
load("@rules_python//python:defs.bzl", "py_test", "py_binary")


# Python binary that uses the library
py_test(
    name = "test_hello_bindings",
    srcs = ["test_hello_bindings.py"],
    deps = ["//python/liba:hello_lib"],  # Depend on the library
)

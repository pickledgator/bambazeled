load("@pip_requirements//:requirements.bzl", "requirement")

py_library(
    name = "python_lib",
    srcs = [
        "python_lib.py",
    ],
    visibility = ["//visibility:public"],
    deps = [ ],
)

py_test(
    name='test_python_lib',
    srcs=[
        'test_python_lib.py',
    ],
    deps=[
        ':python_lib',
    ],
    size = 'small',
)

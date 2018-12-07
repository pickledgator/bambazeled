cc_library(
    name = "cpp_lib",
    hdrs = ["cpp_lib.h"],
    srcs = ["cpp_lib.cpp"],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "unittests",
    srcs = [
        "test_cpp_lib.cpp",
    ],
    deps = [
        "@catch//:catch_main",
        ":cpp_lib",
    ],
    size = 'small',
)

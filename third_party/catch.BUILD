cc_library(
    name = "catch_main",
    srcs = [":unittests_main"],
    hdrs = ["single_include/catch2/catch.hpp"],
    includes = ["single_include/catch2"],
    visibility = ["//visibility:public"],
)

genrule(
    name = "unittests_main",
    outs = ["unittests_main.cpp"],
    cmd = """
        printf '#define CATCH_CONFIG_MAIN\n' >> $@
        printf '#include "catch.hpp"' >> $@
    """,
)

cc_library(
    name = "catch",
    srcs = [
        "single_include/catch2/catch.hpp",
    ],
    hdrs = [
        "single_include/catch2/catch.hpp",
    ],
    includes = ["single_include/catch2"],
    visibility = ["//visibility:public"],
)

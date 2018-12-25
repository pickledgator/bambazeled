load("@bazel_tools//tools/build_defs/pkg:pkg.bzl", "pkg_tar", "pkg_deb")

pkg_tar(
    name = "deployment_tar",
    srcs = [
      "//bambazeled/apps/cpp_app",
    ],
    mode = "0755",
    package_dir = "/opt/bin",
    visibility = ["//visibility:public"],
)

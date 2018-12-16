load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# To generate sha256 hash, use: "shasum -a 256 filename.tar.gz"

# =================================
# C++ Dependencies
# =================================

# Cxxopts
http_archive(
    name = "cxxopts",
    sha256 = "e19216251427d04f0273e6487c0246ae2dbb4154bf178f43896af8fa1ef89f3f",
    build_file = "//:third_party/cxxopts.BUILD",
    url = "https://github.com/jarro2783/cxxopts/archive/v2.1.1.tar.gz",
    strip_prefix = "cxxopts-2.1.1",
)

# Spdlog for logging
http_archive(
    name = "spdlog",
    build_file = "//:third_party/spdlog.BUILD",
    url = "https://github.com/gabime/spdlog/archive/v1.2.1.tar.gz",
    sha256 = "867a4b7cedf9805e6f76d3ca41889679054f7e5a3b67722fe6d0eae41852a767",
    strip_prefix = "spdlog-1.2.1",
)

# Catch for unit testing
http_archive(
    name = "catch",
    build_file = "//:third_party/catch.BUILD",
    url = "https://github.com/catchorg/Catch2/archive/v2.5.0.tar.gz",
    sha256 = "720c84d18f4dc9eb23379941df2054e7bcd5ff9c215e4d620f8533a130d128ae",
    strip_prefix = "Catch2-2.5.0",
)

# Python and its dependencies
#git_repository(
#    name = "io_bazel_rules_python",
#    remote = "https://github.com/bazelbuild/rules_python.git",
#    commit = "f3a6a8d00a51a1f0e6d61bc7065c19fea2b3dd7a", # Nov 27, 2018
#)

#load("@io_bazel_rules_python//python:pip.bzl", "pip_repositories", "pip_import")
#pip_repositories()
#pip_import(
#    name = "pip_requirements",
#    requirements = "//:requirements.txt",
#)

#load("@pip_requirements//:requirements.bzl", "pip_install")
#pip_install()

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# Cxxopts
http_archive(
    name = "cxxopts",
    sha256 = "e19216251427d04f0273e6487c0246ae2dbb4154bf178f43896af8fa1ef89f3f",
    build_file = "//:third_party/cxxopts.BUILD",
    url = "https://github.com/jarro2783/cxxopts/archive/v2.1.1.tar.gz",
    strip_prefix = "cxxopts-2.1.1",
)

# Catch for unit testing
http_archive(
    name = "catch",
    build_file = "//:third_party/catch.BUILD",
    url = "https://github.com/catchorg/Catch2/archive/v2.5.0.tar.gz",
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

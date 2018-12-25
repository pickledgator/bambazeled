# Bambazeled
A playground for infrastructure and tools, built with [bazel](https://www.bazel.build/).

This project explores:
* Usage of library and applications written in various languages
* Strategies for containerization of hermetic Bazel builds
* Cross-compiling support for building containers that can be run on non-host-native cpu architectures and distributions
* Support for pre-built libraries that are a pain in the ass to bazelify (via `rules_foreign_cc`)
* Several external libraries that could be used to develop a platform

# Prerequisites
## Bazel
Requires bazel version `v0.19.2`.
Install using the instructions found [here](https://docs.bazel.build/versions/master/install.html).

## Docker

## Included Dependencies
## C++
* Catch2 - Unit testing framework
* Spdlog - Logging framework
* Cxxopts - Lightweight program options

## Python
* Click - Lightweight program options
* Unittest (built-in) - Unit testing framework
* Logging (built-in) - Logging framework

# Docker Base Images
* Building locally
To build the docker base images locally, use `docker build -f Dockerfile.xxx .`

* Deploying base images to Docker Hub

# Notes
**Pytest** doesn't play well with bazel. Here's a [thread](https://groups.google.com/forum/#!topic/bazel-discuss/d1RKUmyve_Q) on why.

There are active [issues](https://github.com/tensorflow/tensorflow/issues/24124) with toolchains in `v0.20.0` and `v0.21.0`.

## References
https://github.com/tensorflow/tensorflow
https://github.com/envoyproxy/envoy
https://blog.bazel.build/2015/07/28/docker_build.html
https://github.com/jemdiggity/rules_os_dependent_http_archive

https://github.com/xifengcun/tensorflow-aarch64-crossbuild
https://github.com/hwright/hello-bazel-docker

## Troubleshooting
```
ERROR: /private/var/tmp/_bazel_nicfischer/efd2bfd1d5e4ce14c310c83fe208d378/external/local_config_cc/BUILD:50:5: in apple_cc_toolchain rule @local_config_cc//:cc-compiler-armeabi-v7a: Xcode version must be specified to use an Apple CROSSTOOL. If your Xcode version has changed recently, try: "bazel clean --expunge" to re-run Xcode configuration
```

XCode isn't configured properly. Install XCode from the [Apple Developer Site](https://developer.apple.com/xcode/downloads/), then run: `sudo xcodebuild -license accept`

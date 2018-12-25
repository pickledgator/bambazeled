load("@io_bazel_rules_docker//container:container.bzl", "container_image")

container_image(
    name = "deployment_image",
    base = "@official_ubuntu//image",
    cmd = ["/opt/bin/cpp_app"],
    mode = "777",
    stamp = True,
    tars = ["//bambazeled:deployment_tar"],
)

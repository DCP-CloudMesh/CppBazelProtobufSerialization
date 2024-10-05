load("@rules_proto//proto:defs.bzl", "proto_library")

proto_library(
    name = "taskrequest_proto",
    srcs = ["taskrequest.proto"],
)

cc_proto_library(
    name = "taskrequest_cc_proto",
    deps = [":taskrequest_proto"],
    visibility = ["//visibility:public"],
)

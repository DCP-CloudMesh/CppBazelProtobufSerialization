load("@rules_cc//cc:defs.bzl", "cc_binary")
load("@rules_proto//proto:defs.bzl", "proto_library")

# This is the main target for the binary
cc_binary(
    name = "main",
    srcs = ["src/main.cpp"],
    deps = [
        ":taskrequest",
    ],
)

# These are the libraries that the binary depends on
cc_library(
    name = "taskrequest",
    srcs = ["src/taskrequest.cpp"],
    hdrs = ["include/taskrequest.h"],
    deps = [
        "//:taskrequest_cc_proto"
    ],
)

# These are the proto files that the library depends on
proto_library(
    name = "taskrequest_proto",
    srcs = ["proto/taskrequest.proto"],
)

cc_proto_library(
    name = "taskrequest_cc_proto",
    deps = [":taskrequest_proto"],
    visibility = ["//visibility:public"],
)


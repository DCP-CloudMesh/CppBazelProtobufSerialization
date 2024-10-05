load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "main",
    srcs = ["src/main.cpp"],
    deps = [
        ":taskrequest",
    ],
)

cc_library(
    name = "taskrequest",
    srcs = ["src/taskrequest.cpp"],
    hdrs = ["include/taskrequest.h"],
    deps = [
        "//proto:taskrequest_cc_proto"
    ],
)

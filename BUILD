load("@rules_proto//proto:defs.bzl", "proto_library")

cc_binary(
  name = "hello_world",
  deps = ["@com_google_absl//absl/strings"],
  srcs = ["hello_world.cc"],
)

proto_library(
  name = "myproto",
  srcs = ["myproto.proto"],
)

py_binary(
  name = "hello",
  deps = [],
  srcs = ["hello.py"],
)

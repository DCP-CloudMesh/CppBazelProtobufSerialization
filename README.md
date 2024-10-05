# Bazel and Protobuf C++ Example

## Dependencies
Follow this to install bazel - https://bazel.build/install
Follow this to clone and install the protobuf library - https://github.com/protocolbuffers/protobuf/tree/main/src

## Key Files -
1. `BUILD` file - Contains the build instructions for the target.
2. `MODULE.bazel` file - Contains the module name and the dependencies.

## Building and running with the proto -
This flag is necessary `--experimental_google_legacy_api` to use the protobuf library.

To build all targets, use the following command -
```
bazel build //... --experimental_google_legacy_api
```

To run the target, use the following command -
```
./bazel-bin/target_name
```

*For granular build control, use the following commands -*
```
bazel build //target_directory:target_name --experimental_google_legacy_api
```


## How to build and run with Bazel in general -
Build using `bazel build` command -
1. If in target directory and only one target is there, then use `bazel build`
2. If in target directory and multiple targets are there, then use `bazel build //target_name`
3. If outside target directory, then use `bazel build //target_directory:target_name`

Execute using `./bazel-bin/target_name` command.



Follow this to install bazel - https://bazel.build/install

Add `MODULE.bazel` file to the root folder and add the `BUILD` file to the main folder.

Build using `bazel build` command -
1. If in target directory and only one target is there, then use `bazel build`
2. If in target directory and multiple targets are there, then use `bazel build //target_name`
3. If outside target directory, then use `bazel build //target_directory:target_name`

Execute using `./bazel-bin/target_directory/target_name` command.

Building and running with the proto -

`bazel build //main:main --experimental_google_legacy_api`

`bazel run //main --experimental_google_legacy_api`



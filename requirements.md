# Vcpkg

The easiest way to install all dependencies is [Vcpkg](https://docs.microsoft.com/en-us/cpp/build/vcpkg).

### (1) Get vcpkg

``git clone https://github.com/Microsoft/vcpkg && cd vcpkg``

### (2) Setup vcpkg

Check prerequisites (https://docs.microsoft.com/en-us/cpp/build/install-vcpkg) and after this issue

``./bootstrat-vcpkg``

command to setup vcpkg. 

### (3) Install dependencies

``./vcpkg install curl boost-json``

### (4) Add Vcpkg toolchain to Cmake

Vcpkg provides CMake's toolchain file in ``./scripts/buildsystems/vcpkg.cmake`` (relative path from root directory of vcpkg)

Just add it using the parameter ``-DCMAKE_TOOLCHAIN_FILE=<path_to_toolchain>``. In CLion, you can do this in Settings -> Build, Execution, Deployment -> CMake using "CMake options" option. 
# 指定 cmake 最低版本
cmake_minimum_required(VERSION 2.6)

# 指定工程名称
project(tutorial)

# 版本号
set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)

# 配置一个头文件来传递 CMake 的设置到源代码中
configure_file (
    "${PROJECT_SOURCE_DIR}/config.h.in"
    "${PROJECT_BINARY_DIR}/config.h"
)

# 把二进制目录树添加到引入路径的搜索路径上，
# 这样源代码中就可以找到上面配置的 config.h 了
include_directories("${PROJECT_BINARY_DIR}")

# 指定工程输出为可执行文件 tutotial
add_executable(tutorial main.cc)


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

# 定义宏
option (USE_MYMATH "使用自定义数学函数" ON)

#
# 添加自定义 lib
if (USE_MYMATH)
    add_library(mymath mysqrt.cc)
    # 添加头文件（被源码引用）
    include_directories("${PROJECT_SOURCE_DIR}/mymath")
    # 添加子目录（好让 lib 被编译）
    add_subdirectory(mymath)
    set (EXTRA_LIBS ${EXTRA_LIBS} mymath)
endif (USE_MYMATH)


# 指定工程输出为可执行文件 tutotial
add_executable(tutorial main.cc)
target_link_libraries(tutorial ${EXTRA_LIBS})


# 定义添加可执行文件
add_executable(maketable maketable.cc)

# 产生源代码的命令行
add_custom_command(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/table.h
    COMMAND maketable ${CMAKE_CURRENT_BINARY_DIR}/table.h
    DEPENDS maketable
    )

# 添加至搜索路径
include_directories(${CMAKE_CURRENT_BINARY_DIR})

# 添加至 main library
add_library(mymath mysqrt.cc ${CMAKE_CURRENT_BINARY_DIR}/table.h)

# 安装
install(TARGETS mymath DESTINATION bin)
install(FILES mymath.h DESTINATION include)

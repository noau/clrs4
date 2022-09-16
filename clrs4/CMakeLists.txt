# CMakeList.txt: clrs4 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

# 将源代码添加到此项目的可执行文件。
add_executable (clrs4 "clrs4.cpp" "include/clrs4.h" "include/sort.h" "src/sort.cpp" "include/util.h" "src/util.cpp" "include/search.h" "src/search.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET clrs4 PROPERTY CXX_STANDARD 20)
endif()

# TODO: 如有需要，请添加测试并安装目标。

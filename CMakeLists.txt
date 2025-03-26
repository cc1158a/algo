# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(MyProject C) # 指定仅使用C语言

# 设置C标准
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# 添加可执行文件
add_executable(myprogram main.c sort.c sort.h  greedy.c greedy.h)

# 包含目录
include_directories(include)

# 可选：添加链接库
# target_link_libraries(myprogram m) # 链接数学库示例
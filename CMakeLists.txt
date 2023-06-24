cmake_minimum_required(VERSION 3.20)
project(CPrimePlus C)

set(CMAKE_C_STANDARD 99)

#add_executable(CPrimePlus main.c)
# 遍历项目根目录下所有的 .cpp 文件
file (GLOB files *.c *.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.c\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()


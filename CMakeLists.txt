PROJECT (hello_cmake) #设置工程名

CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

SET (CMAKE_C_FLAGS                "-Wall -std=c99")
SET (CMAKE_C_FLAGS_DEBUG          "-g")
SET (CMAKE_C_FLAGS_MINSIZEREL     "-Os -DNDEBUG")
SET (CMAKE_C_FLAGS_RELEASE        "-O4 -DNDEBUG")
SET (CMAKE_C_FLAGS_RELWITHDEBINFO "-O2 -g")

SET (CMAKE_CXX_FLAGS                "-Wall -std=c++2a") # 
SET (CMAKE_CXX_FLAGS_DEBUG          "-g")  # 编译Debug版本的时候会采用的编译选项，包含调试信息
SET (CMAKE_CXX_FLAGS_MINSIZEREL     "-Os -DNDEBUG") # 主要减小目标文件大小，选项-Os就是这个作用
SET (CMAKE_CXX_FLAGS_RELEASE        "-O4 -DNDEBUG") # 编译Release版本的时候采用的编译选项，默认包-O3选项，该选项表示优化等级
SET (CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O2 -g") # 包含调试信息的Release版本，-O2和-g，优化的同时也包含了调试信息

SET (CMAKE_VERBOSE_MAKEFILE ON) # 打开编译细节

# clang相关的设置
SET (CMAKE_CXX_CLANG_TIDY clang-tidy -checks=-*,readability-*) # clang静态语法检查工具

set(SOURCES
    src/calculator.cpp
    src/main.cpp
)

ADD_EXECUTABLE(hello_cmake ${SOURCES})
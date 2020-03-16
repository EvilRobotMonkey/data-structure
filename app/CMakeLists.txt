cmake_minimum_required(VERSION 3.4.1)

find_library( # Sets the name of the path variable.
        log-lib
        log)

add_library(nativelib
        SHARED
        src/main/cpp/nativelibs.cpp)

target_link_libraries(nativelib
        ${log-lib})

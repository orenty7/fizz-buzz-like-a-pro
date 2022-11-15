cmake_minimum_required(VERSION 3.5)

project(fizz-buzz-like-a-pro LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(outstream/ sender/ number/)


add_executable(fizz-buzz-like-a-pro main.cpp
    outstream/outstream.h
    outstream/fileoutstream.cpp
    outstream/fileoutstream.h

    sender/sender.h
    sender/fizzsender.cpp
    sender/fizzsender.h
    sender/buzzsender.cpp
    sender/buzzsender.h

    number/number.h)

install(TARGETS fizz-buzz-like-a-pro
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

cmake_minimum_required(VERSION 3.5)

project(fizz-buzz-like-a-pro LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(fizz-buzz-like-a-pro main.cpp outstream.h
    fileoutstream.cpp
    fileoutstream.h
    sender.h
    fizzsender.cpp
    fizzsender.h
    buzzsender.cpp
    buzzsender.h
    number.h)

install(TARGETS fizz-buzz-like-a-pro
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

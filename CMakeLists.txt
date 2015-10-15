cmake_minimum_required(VERSION 3.3)
project(Comp)

#Bring the headers into the project
include_directories(include)

#Can add files
file(GLOB SOURCES "src/*.cpp")

add_executable(comp ${SOURCES})
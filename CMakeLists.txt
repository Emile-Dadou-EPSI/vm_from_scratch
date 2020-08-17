cmake_minimum_required(VERSION 3.17)
project(vm_from_scratch)

set(CMAKE_CXX_STANDARD 14)

add_executable(vm_from_scratch main.cpp stack_vm.cpp stack_vm.h)
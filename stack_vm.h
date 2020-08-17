//
// Created by emile on 17/08/2020.
//

#ifndef VM_FROM_SCRATCH_STACK_VM_H
#define VM_FROM_SCRATCH_STACK_VM_H

#include <iostream>
#include <vector>

// type definitions
typedef int32_t i32;


class stack_vm {
    i32 pc = 100; // program counter
    i32 sp = 0; // stack pointer
    std::vector<i32> memory;
    i32 typ = 0;
    i32 dat = 0;
    i32 running = 1;

    // private function
    i32 getType(i32 instruction);
    i32 getData(i32 instruction);
    void fetch();
    void decode();
    void execute();
    void doPrimitive();

public:
    // public functions
    stack_vm();
    void run();
    void loadProgram(std::vector<i32> prog);
};

#endif //VM_FROM_SCRATCH_STACK_VM_H

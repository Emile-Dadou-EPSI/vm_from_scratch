#include "stack_vm.h"

int main() {
    stack_vm vm;
    std::vector<i32> prog{3, 4, 0x40000001, 0x40000000};
    vm.loadProgram(prog);
    vm.run();
    return 0;
}

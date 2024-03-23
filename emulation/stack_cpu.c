#include <stdint.h>
#include "stack_cpu.h"


void init_cpu(CPU* cpu) {
    init_stack(&cpu->stack);
    for (uint8_t i = 0; i < MEM_DEPTH; i++) {
        cpu->memory[i] = 0xFF;
    }
}

void add(CPU* cpu) {
    stack_push(&cpu->stack, pop(&cpu->stack) + pop(&cpu->stack));
}

void sub(CPU* cpu) {
    int8_t operand2 = pop(&cpu->stack);
    stack_push(&cpu->stack, pop(&cpu->stack) - operand2);
}

void mul(CPU* cpu) {
    stack_push(&cpu->stack, pop(&cpu->stack) * pop(&cpu->stack));
}

void div(CPU* cpu) {
    int8_t operand2 = pop(&cpu->stack);
    stack_push(&cpu->stack, pop(&cpu->stack) / operand2);
}

void store(CPU* cpu, uint8_t address) {
    cpu->memory[address] = peek_top_of_stack(cpu);
}

void push(CPU* cpu, int8_t data) {
    stack_push(&cpu->stack, data);
}

int8_t peek_top_of_stack(CPU* cpu) {
    return peek(&cpu->stack);
}


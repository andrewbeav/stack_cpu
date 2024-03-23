#include "stack.h"

#define MEM_DEPTH 128

typedef struct {
    STACK stack;
    int8_t memory[MEM_DEPTH];
} CPU;

void init_cpu(CPU* cpu);
void add(CPU* cpu);
void sub(CPU* cpu);
void mul(CPU* cpu);
void div(CPU* cpu);
void store(CPU* cpu, uint8_t address);
void push(CPU* cpu, int8_t data);
int8_t peek_top_of_stack(CPU* cpu);
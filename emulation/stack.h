#include <stdint.h>

#define STACK_DEPTH 16

typedef struct {
    uint32_t top;
    int8_t stack_array[STACK_DEPTH];
} STACK;

void init_stack(STACK* stack);
int8_t pop(STACK* stack);
void stack_push(STACK* stack, int8_t data);
int8_t peek(STACK* stack);

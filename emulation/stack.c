#include "stack.h"

void init_stack(STACK* stack) {
    stack->top = STACK_DEPTH;
    for (uint8_t i = 0; i < STACK_DEPTH; i++) {
        stack->stack_array[i] = 0xFF;
    }
}

int8_t pop(STACK* stack) {
    return stack->stack_array[stack->top++];
}

void stack_push(STACK* stack, int8_t data) {
    stack->stack_array[--stack->top] = data;
}

int8_t peek(STACK* stack) {
    return stack->stack_array[stack->top];
}
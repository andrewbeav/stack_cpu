#include <stdio.h>
#include "stack_cpu.h"

int main() {
	CPU cpu = { 0 };
	init_cpu(&cpu);
	printf("Top: %d\n", peek_top_of_stack(&cpu));

	push(&cpu, 40);
	printf("Top: %d\n", peek_top_of_stack(&cpu));
	push(&cpu, 80);
	printf("Top: %d\n", peek_top_of_stack(&cpu));
	add(&cpu);
	printf("Top: %d\n", peek_top_of_stack(&cpu));
	push(&cpu, 122);
	printf("Top: %d\n", peek_top_of_stack(&cpu));
	sub(&cpu);
	printf("Top: %d\n", peek_top_of_stack(&cpu));

	return 0;
}
#include "monty.h"

/**
 * nop - Do nothing.
 * @stack: Double pointer to the stack.
 * @line_number: Line number being executed from the file.
 */
void nop(stack_t **stack, unsigned int line_number)
{
    (void)stack;
    (void)line_number;
    /* This opcode doesn't perform any action */
}


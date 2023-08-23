#include "monty.h"

/**
 * add - Add the top two elements of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Line number being executed from the file.
 */
void add(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    int result = (*stack)->n + (*stack)->next->n;
    pop(stack, line_number);
    (*stack)->n = result;
}


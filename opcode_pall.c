#include "monty.h"

/**
 * pall - Print all elements of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Line number being executed from the file.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

    (void)line_number;
    current = *stack;

    while (current)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}


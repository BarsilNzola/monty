#include "monty.h"

/**
 * swap - Swap the top two elements of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Line number being executed from the file.
 */
void swap(stack_t **stack, unsigned int line_number)
{

    int temp;  /* Declare variables at the beginning */

    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    temp = (*stack)->n;  /* Store the value from the top of the stack */
    (*stack)->n = (*stack)->next->n;
    (*stack)->next->n = temp;
}


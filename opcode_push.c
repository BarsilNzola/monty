#include "monty.h"

/**
 * push - Add an element to the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Line number being executed from the file.
 * @value: Value to push onto the stack.
 */
void push(stack_t **stack, unsigned int line_number)
{
    stack_t *new_node;

    char *arg = strtok(NULL, " \n");
    int num;

    if (!arg || (!isdigit((unsigned char)*arg) && *arg != '-'))
    {
        fprintf(stderr, "L%u: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    num = atoi(arg);

    new_node = malloc(sizeof(stack_t));
    if (!new_node)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = num;
    new_node->prev = NULL;
    new_node->next = *stack;

    if (*stack)
        (*stack)->prev = new_node;

    *stack = new_node;
}

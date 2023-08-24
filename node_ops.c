#include "monty.h"

/**
 * swap_nodes - Swaps the top two nodes in the stack.
 * @stack: Pointer to the top node of the stack.
 * @line_number: The line number.
 */
void swap_nodes(stack_t **stack, unsigned int line_number)
{
    stack_t *temp;

    if (stack == NULL)
        more_errors(8, line_number, "swap");

    temp = (*stack)->next;
    (*stack)->next = temp->next;
    temp->next = *stack;
    (*stack)->prev = temp;
    temp->prev = NULL;
    *stack = temp;
}

/**
 * add_nodes - Adds the top two nodes in the stack.
 * @stack: Pointer to the top node of the stack.
 * @line_number: The line number.
 */
void add_nodes(stack_t **stack, unsigned int line_number)
{
    int result;

    if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
        more_errors(8, line_number, "add");

    (*stack) = (*stack)->next;

    result = (*stack)->n + (*stack)->prev->n;

    (*stack)->n = result;

    free((*stack)->prev);
    (*stack)->prev = NULL;
}


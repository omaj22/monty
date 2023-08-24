#include "monty.h"

/**
 * subtract_nodes - Subtracts the top two nodes in the stack.
 * @stack: Pointer to the top node of the stack.
 * @line_number: The line number.
 */
void subtract_nodes(stack_t **stack, unsigned int line_number)
{
    int result;

    if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
        more_errors(8, line_number, "sub");

    (*stack) = (*stack)->next;

    result = (*stack)->n - (*stack)->prev->n;

    (*stack)->n = result;

    free((*stack)->prev);
    (*stack)->prev = NULL;
}

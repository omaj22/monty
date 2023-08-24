#include "monty.h"

/**
 * divide_nodes - Divides the top two nodes in the stack.
 * @stack: Pointer to the top node of the stack.
 * @line_num: The line num.
 */
void divide_nodes(stack_t **stack, unsigned int line_num)
{
    int result;

    if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
        more_errors(8, line_number, "div");

    (*stack) = (*stack)->next;

    result = (*stack)->n / (*stack)->prev->n;

    (*stack)->n = result;

    free((*stack)->prev);
    (*stack)->prev = NULL;
}

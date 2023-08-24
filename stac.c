#include "monty.h"

/**
 * push_to_stack - Adds a node to the stack.
 * @stack: Pointer to the top node of the stack.
 * @line_num: The line num.
 */
void push_to_stack(stack_t **stack, unsigned int line_number)
{
    stack_t *new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = line_number;
    new_node->next = *stack;
    new_node->prev = NULL;

    if (*stack != NULL)
        (*stack)->prev = new_node;

    *stack = new_node;
}

/**
 * pop_from_stack - Removes the top node from the stack.
 * @stack: Pointer to the top node of the stack.
 * @line_num: The line num.
 */
void pop_from_stack(stack_t **stack, unsigned int line_number)
{
    if (stack == NULL || *stack == NULL)
    {
        more_errors(7, line_number);
        return;
    }

    stack_t *temp = *stack;
    *stack = temp->next;

    if (*stack != NULL)
        (*stack)->prev = NULL;

    free(temp);
}

/**
 * print_top_of_stack - Prints the top element of the stack.
 * @stack: Pointa to the top node of the stack.
 * @line_num: The line num.
 */
void print_top_of_stack(stack_t **stack, unsigned int line_number)
{
    if (stack == NULL || *stack == NULL)
    {
        more_errors(6, line_number);
        return;
    }

    printf("%d\n", (*stack)->n);
}


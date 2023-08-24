#include "monty.h"

/**
 * add_to_queue - Adds a node to the end of the queue.
 *
 * @new_node: The node to be added.
 * @line_num The line num.
 */
void add_to_queue(stack_t **new_node, unsigned int line_number)
{
    stack_t *temp1;
    (void)line_number;

    if (new_node == NULL || *new_node == NULL)
        exit(EXIT_FAILURE);

    if (header == NULL)
    {
        header = *new_node;
        return;
    }

    temp1 = header;

    while (temp1->next != NULL)
        temp1 = temp1->next;

    temp1->next = *new_node;
    (*new_node)->prev = temp1;
}

/**
 * push_to_stack - Adds a node to the stack.
 *
 * @new_node: The node to be added.
 * @line_num: The line num.
 */
void push_to_stack(stack_t **new_node, unsigned int line_number)
{
    stack_t *temp1;
    (void)line_number;

    if (new_node == NULL || *new_node == NULL)
        exit(EXIT_FAILURE);

    if (header == NULL)
    {
        header = *new_node;
        return;
    }

    temp1 = header;

    temp1->prev = *new_node;
    header = *new_node;
    header->next = temp1;
    temp1->prev = header;
}


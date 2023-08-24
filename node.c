#include "monty.h"

/**
 * create_node - Creates a new node with the given data.
 * @data: The data for the new node.
 *
 * Return: A pointer to the newly created node, or NULL if failed.
 */
stack_t *create_new_node(int data)
{
    stack_t *new_node = malloc(sizeof(stack_t));
    
    if (new_node == NULL)
        error_output(4);
    
    new_node->next = NULL;
    new_node->prev = NULL;
    new_node->n = data;
    
    return new_node;
}

/**
 * free_nodes - Frees the allocated memory for all nodes in the list.
 */
void free_nodes(void)
{
    stack_t *current = header;
    stack_t *next_node;

    while (current != NULL)
    {
        next_node = current->next;
        free(current);
        current = next_node;
    }

    header = NULL; // Reset the header to NULL after freeing all nodes.
}


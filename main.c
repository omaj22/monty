#include "monty.h"

stack_t *header = NULL;

/**
 * main - Entry point of the program.
 * @argc: Number of command line arguments.
 * @argv: Array of command line argument strings.
 *
 * Return: Always returns 0.
 */
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        error_output(1);
    }
    else
    {
        file_opener(argv[1]);
        nodes_free();
    }

    return 0;
}


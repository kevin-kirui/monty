#include "monty.h"

/**
 * addnode - Adds a node to the head of the stack.
 * @head: Pointer to the head of the stack
 * @n: New value to be added
 * Return: No return
 */
void addnode(stack_t **head, int n)
{
	stack_t *new_node, *current;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: Unable to allocate memory\n");
		exit(EXIT_FAILURE);
	}

	current = *head;

	new_node->n = n;
	new_node->next = current;
	new_node->prev = NULL;

	if (current)
		current->prev = new_node;

	*head = new_node;
}


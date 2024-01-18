#include "monty.h"

/**
 * f_pall - Prints the stack.
 * @head: Stack head
 * @counter: Not used
 * Return: No return
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *current = *head;

	(void)counter;

	if (current == NULL)
		return;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}


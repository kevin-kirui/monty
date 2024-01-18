#include "monty.h"

/**
 * f_mod - Computes the rest of the division of the second
 * top element of the stack by the top element of the stack.
 * @head: Stack head
 * @counter: Line number
 * Return: No return
 */
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;

	while (h)
	{
		h = h->next;
		len++;
	}

	if (len < 2)
		handle_error("can't mod, stack too short", counter);

	if (h->n == 0)
		handle_error("division by zero", counter);

	aux = h->next->n % h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}


#include "lists.h"

/**
 * print_dlistint - prints all doubly linked list elements
 * @h: header of data type dlistint_t
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count_nodes = 0;

	dlistint_t *current = h;
	while (current != NULL)
	{
		printf("%d", current->n);
		count_nodes++;
		current = current->next;
	}

	return (count_nodes);
}

#include "lists.h"

/**
 * print_dlistint - prints all doubly linked list elements
 * @h: header of data type dlistint_t
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count_nodes = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp)
	{
		printf("%d/n", temp->n);
		temp = temp->next;
		count_nodes++;
	}

	return (count_nodes);
}

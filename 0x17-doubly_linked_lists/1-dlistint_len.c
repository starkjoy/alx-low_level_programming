#include "lists.h"

/**
 * dlistint_len - finds the number of elements in linked list
 * @h: header of data type dlistint_t
 * Return: number of elements in all nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t number_of_elements = 0;

	while (h != NULL)
	{
		number_of_elements++;
		h = h->next;
	}

	return (number_of_elements);
}

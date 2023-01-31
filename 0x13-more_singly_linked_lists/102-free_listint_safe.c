#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint
 * @h: accepts pointer to pointer
 * Return: returns void
 */

void free_list(listint_t *head);

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t size = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	while (*h)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		size++;
	}

	*h = NULL;

	return (size);
}

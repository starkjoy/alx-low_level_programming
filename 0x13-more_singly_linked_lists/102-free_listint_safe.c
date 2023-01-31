#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint
 * @h: accepts pointer to pointer
 * Return: returns void
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t size = 0;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
		size++;
	}
	free(head);

	head = NULL;

	return (size);
}

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

	temp = *h;

	while (temp)
	{
		*h = (*h)->next;
		free_list(temp);
		temp = *h;
		size++;
	}

	*h = NULL;

	return (size);
}
/**
 * free_list - Frees list recursively
 * @head - listint_t head
 * Return: Nothing
 */

void free_list(listint_t *head)
{
	listint_t *temp;

	if (head)
	{
		temp = head;
		temp = temp->next;
		free(temp);
		free_list(temp);
	}
	free(head);
}
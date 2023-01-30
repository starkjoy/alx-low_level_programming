#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: accepts a pointer to a head pointer
 * @idx: accepts an unsigned int
 * @n: accepts integer
 * Return: returns listint_t
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = *head;
	unsigned int count = 0;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
	{
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}

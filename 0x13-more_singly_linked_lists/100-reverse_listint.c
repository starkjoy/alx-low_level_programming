#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - inserts a new node at a given position
 * @head: accepts a pointer to a head pointer
 * Return: returns integer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}

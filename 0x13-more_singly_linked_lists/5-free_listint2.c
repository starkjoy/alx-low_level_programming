#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free list
 * @head: accepts pointer to pointer
 * Return: returns void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = *head;
	while (*head)
	{
		temp = *head;
		(*head) = (*head)->next;
		free(temp);
	}
	*head = NULL;
}

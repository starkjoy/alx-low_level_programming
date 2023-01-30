#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes head node and returns its data
 * @head: accepts pointer to pointer
 * Return: returns int
 */

int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;

	return (n);
}

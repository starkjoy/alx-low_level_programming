#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node
 * @head: accepts pointer to pointer
 * @n: accepts int
 * Return: returns variable of type list_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;

	*head = malloc(sizeof(listint_t));

	if (!(*head))
	{
		return (NULL);
	}

	(*head)->n = n;
	(*head)->next = new_node;

	return (*head);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node
 * @head: accepts pointer to pointer
 * Return: returns variable of type list_t
 */

listint_t *add_nodeint_end(list_t **head, const int n)
{
	listint_t *new_node, *temp;
	int length = 0;

	new_node = malloc(sizeof(listint));
	if (new_node == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}

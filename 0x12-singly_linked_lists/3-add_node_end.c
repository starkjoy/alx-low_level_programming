#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node
 * @head: accepts pointer to pointer
 * @str: accepts char
 * Return: returns variable of type list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	int length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	while (str[length])
	{
		length++;
	}

	new_node->len = length;
	new_node->str = strdup(str);
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

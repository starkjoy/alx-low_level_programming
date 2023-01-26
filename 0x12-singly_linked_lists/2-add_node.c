#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node 
 * @head: accepts pointer to pointer
 * @str: accepts char
 * Return: returns variable of type list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

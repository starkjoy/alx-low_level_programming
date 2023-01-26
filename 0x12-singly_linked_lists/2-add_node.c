#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node 
 * @head: accepts pointer to pointer
 * @str: accepts char
 * Return: returns variable of type list_t
 */

list_t *add_node(list_t **head, const char *str);
{
	head = malloc(sizeof(list_t));

	if (head == NULL)
	{
		return (NULL);
	}
	head->str = strdup(str);
	head->next = h;
	h = head;

	return (head);
}

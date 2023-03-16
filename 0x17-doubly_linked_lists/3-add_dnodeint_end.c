#include "lists.h"

/**
 * add_dnodeint_end - adds a node to end of list
 * @head: header of data type dlistint_t
 * @n: accepts integer
 * Return: address of node or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		new_node->prev = last_node;
		last_node->next = new_node;
	}

	return (new_node);
}

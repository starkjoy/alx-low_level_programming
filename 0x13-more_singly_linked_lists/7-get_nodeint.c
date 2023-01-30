#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns a node of a listint_t
 * @head: accepts a head pointer
 * @index: accepts an index
 * Return: returns int
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	int count = 0;

	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}

	if (temp != NULL)
	{
		return (temp);
	}
	else
	{
		return (NULL);
	}
}

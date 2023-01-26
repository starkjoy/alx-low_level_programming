#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free list
 * @head: accepts pointer to pointer
 * Return: returns void
 */

void free_list(list_t *head)
{
	list_t *temp;

	for (temp = head; temp != NULL; head = head->next) 
	{
		free(temp->str);
		free(temp);	
	}
	free(head);
}

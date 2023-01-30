#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes head node and returns its data
 * @head: accepts pointer to pointer
 * Return: returns int
 */

int pop_listint_t(listint_t **head)
{
	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);
}

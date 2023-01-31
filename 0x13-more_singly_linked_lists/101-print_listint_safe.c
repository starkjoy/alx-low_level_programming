#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints all elements of a listint_t
 * @head: accepts pointer to list_t
 * Return: returns type size_t
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;

	while (head)
	{
		printf("[%p] %d\n", head, head->n);
		head = head->next;
		nodes++;
	}

	return (nodes);
}

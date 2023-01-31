#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints all elements of a listint_t
 * @head: accepts pointer to list_t
 * Return: returns type size_t
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *temp = head;
	const listint_t *fast = head;

	while (fast && fast->next)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		fast = fast->next->next;

		if (temp == fast)
		{
			exit(98);
		}
		nodes++;
	}

	return (nodes);
}

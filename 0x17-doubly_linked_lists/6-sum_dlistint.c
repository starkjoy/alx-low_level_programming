#include "lists.h"

/**
 * sum_dlistint - sums all data(n) of  a linked list
 * @head: points to head node
 * Return: returns sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;
	current = head;

	if (head == NULL)
		return (0);
	else
	{
		while (current != NULL)
		{
			sum = sum + current->n;
			current = current->next;
		}
	}

	return (sum);
}

#include "lists.h"

/* get_dnodeint_at_index - returns nth node of a linked list
 * @head: points to head node
 * @index: position of node in linked list
 * Return: node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	dlistint_t *found = NULL;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			found = current;
			break;
		}
		else
		{
			count++;
			current = current->next;
		}
	}
	return (found);
}

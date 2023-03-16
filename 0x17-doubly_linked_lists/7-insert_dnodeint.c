#include "lists.h"

/* insert_dnodeint_at_index - inserts new node at index
 * @h: points to head node
 * @idx: position of node in linked list
 * @n: integer data
 * Return: node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_instnode = NULL;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == idx)
		{
			new_instnode = malloc(sizeof(dlistint_t));
			if (new_instnode == NULL)
				return (NULL);
			new_instnode->n = n;
			new_instnode->prev = current->prev;
			new_instnode->next = current;
			if (current->prev != NULL)
				current->prev->next = new_instnode;
			else
				*head = new_instnode;
			current->prev = new_instnode;
			break;
		}
		count++;
		current = current->next;
	}
	return (new_instnode);
}

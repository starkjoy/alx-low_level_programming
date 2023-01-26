#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list_t
 * @h: accepts pointer to list_t
 * Return: returns type size_t
 */

size_t print_list(const list_t *h)
{
	size_t n;

	if (str == NULL)
	{
		printf("[0] (nil)");
	}
	else
	{
		printf("[%u] (%s)\n", len, str);
	}

	n = list_t head;

	printf("-> %lu elements\n", n);

	return (n);
}

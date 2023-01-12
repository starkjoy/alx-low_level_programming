#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concats two strings
 * @s1: accepts integer
 * @s2: accepts char
 * @n: accepts positive int
 * Return: void
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int size;
	unsigned int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n > strlen(s2))
	{
		n = strlen(s2);
	}

	size = strlen(s1) + n;

	ptr = malloc(sizeof(char) * (size + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		strcpy(ptr, s1);

		for (i = 0; i < n; i++)
		{
			ptr[strlen(s1) + i] = s2[i];
		}
		ptr[size] = '\0';

		return (ptr);
	}
}

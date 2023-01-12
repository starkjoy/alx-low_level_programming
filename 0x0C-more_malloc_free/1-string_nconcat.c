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
	
	size = strlen(s1) + strlen(s2);

	ptr = malloc(char) * (size + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		if (n >= strlen(s2))
		{

			for (i = 0; i < strlen(s2); i++)
			{
				s1 = strcat(s1, s2[i]);
			}
		}
		else
		{
			for (i = 0; i < n; i++)
			{
				s1 = strcat(s1, s2[i]);
			}
		}

		ptr = s1;

		return (ptr);
	}
}

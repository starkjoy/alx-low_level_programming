#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - joins two string
 * @s1: accepts pointer
 * @s2: accepts pointer
 * Return: char pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	ptr = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr = strcpy(ptr, s1);
		ptr = strcat(ptr, s2);

		return (ptr);
	}
}

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
	char *s;
	char *ptr;

	s = strcat(s1, s2);

	ptr = malloc(sizeof(char) * (strlen(s) + 1));

	if (ptr = NULL)
	{
		return (NULL);
	}
	else
	{
		ptr = strcpy(ptr, s);
		return (ptr);
	}
}

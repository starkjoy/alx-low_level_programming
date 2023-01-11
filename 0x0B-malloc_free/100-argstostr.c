#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - joins arguments
 * @ac: accepts integer
 * @av: accepts pointer to pointer
 * Return: char pointer
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j;
	int size = 0;
	char *temp;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		size = size + strlen(av[i]) + 1;
	}

	ptr = (char*)malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		temp = ptr;
		for (i = 0; i < ac; i++)
		{
			if (av[i] == NULL)
			{
				free(ptr);
				return (NULL);
			}
			strcat(temp, av[i]);
			temp = temp + strlen(ac[i]);
			strcat(temp, "\n");
			temp = temp + 1;
		}
	}
	return (ptr);
}

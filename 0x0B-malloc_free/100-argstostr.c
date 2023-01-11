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
		for (i = 0; i < ac; i++)
		{
			if (av[i] == NULL)
			{
				for (j = 0; j < i; j++)
				{
					free(av[j]);
				}
				free(ptr);
				return (NULL);
			}
		}
		for (i = 0; i < ac; i++)
		{
			strcat(ptr, av[i]);
			strcat(ptr, "\n");
			ptr = ptr + strlen(av[i] + 1;
		}
	}
	return (ptr);
}

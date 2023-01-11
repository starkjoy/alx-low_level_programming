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

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (ac > 1)
	{
		for (i = 1; i < ac; i++)
		{
			ptr = (char*)malloc(sizeof(char) * *(av));
			
			if (av[i] == NULL)
			{
				int j;

				for (j = 0; j < i; j++)
				{
					free(av[j]);

					return (NULL);
				}
			}
		}
		for (i = 2; i < ac; i++)
		{
			ptr = strcpy(ptr, av[1]);
			ptr = strcat(ptr, ("\n"av[i]));
		}
	}
	putchar("\n");
	
	return (ptr);

}

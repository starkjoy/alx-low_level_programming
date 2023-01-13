#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry
 * @argv: accepts a char array
 * @argc: accepts an int
 * Return: pointer to integer
 */

int main(int argc, char *argv[])
{
	int *ptr1;
	int *ptr2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	ptr1 = malloc(sizeof(int));
	ptr2 = malloc(sizeof(int));

	if (ptr1 == NULL || ptr2 == NULL)
	{
		free(ptr1);
		free(ptr2);
		printf("Error\n");
		exit(98);
	}
	else
	{
		if (atoi(argv[1]) >= 0 || atoi(argv[2]) >= 0)
		{
			printf("Error\n");
			exit(98);
		}
		else
		{
			*ptr1 = atoi(argv[1]);
			*ptr2 = atoi(argv[2]);

			printf("%i\n", (*ptr1) * (*ptr2));
		}
	}
	free(ptr1);
	free(ptr2);

	return (0);
}

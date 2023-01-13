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
	void *ptr1;
	void *ptr2;

	if (argc != 2)
	{
		printf("Error\n");
		exit(98);
	}

	ptr1 = malloc(sizeof(int)) * argv[1];
	ptr2 = malloc(sizeof(int)) * argv[2];

	if (ptr1 == NULL || ptr2 == NULL)
	{
		free(ptr1);
		free(ptr2);
		return (NULL);
	}
	else
	{
		if (atoi(argv[argc - 1]) >= 0 || atoi(argv[argc]) >= 0)
		{
			printf("Error\n");
			exit(98);
		}
		else
		{
			ptr1 = &atoi(argv[1]);
			ptr2 = &atoi(argv[2]);

			return (printf("%i\n", *(*ptr1 * ptr2)));
		}
	}
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry
 * @argc: args count
 * @argv: aguments array
 * Return: int
 */

int main(int argc, char *argv[])
{
	int *num1, *num2;
	
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = malloc(sizeof(int));
	num2 = malloc(sizeof(int));

	if (num1 == NULL || num2 == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	*num1 = atoi(argv[1]);
	*num2 = atoi(argv[2]);

	printf("%d\n", (*num1) * (*num2));
	free(num1);
	free(num2);

	return (0);
}

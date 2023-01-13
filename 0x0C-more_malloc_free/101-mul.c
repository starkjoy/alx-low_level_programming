#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - program entry
 * @argc: args count
 * @argv: aguments array
 * Return: int
 */

int main(int argc, char *argv[])
{
	int *num1, *num2;
	long int i;
	
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; i < strlen(argv[1]); i++)
	{
		if (!(isdigit(argv[1][i])))
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (i = 0; i < strlen(argv[2]); i++)
	{
		if (!(isdigit(argv[2][i])))
		{
			printf("Error\n");
			exit(98);
		}
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

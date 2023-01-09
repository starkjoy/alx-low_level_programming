#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry
 * @argc: accepts integer value
 * @argv: accepts pointer to char
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int i;
	int result = 0;

	if (argc < 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i]))
		{
			int value = argv[i];

			result = result + value;
		}
		else
		{
			printf("Error\n");

			return (1);
		}
	}
	printf("%i\n", result);

	return (0);
}

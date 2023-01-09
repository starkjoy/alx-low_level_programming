#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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

	if (argc < 2 )
	{
		printf("%i\n", atoi(argv[1]));
	}
	else
	{

		for (i = 1; i < argc; i++)
		{
			if (isdigit(argv[i]))
			{
				int value = atoi(argv[i]);

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

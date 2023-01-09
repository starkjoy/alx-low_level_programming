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
	int num;
	int i;

	int res = 0;

	while (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			if (!(isdigit(argv[i])))
			{
				printf("Error\n");

				return (1);
			}
			else
			{
				num = atoi(argv[i]);
				res = res + num;
			}
		}

	}

	printf("%i\n", res);

	return (0);
}

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

	if (argc < 2)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		int value = atoi(argv[i]);

		if (value > 0)
		{
			result = result + value;
		}
	}

	return (1);
}

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
	int count = 1;
	int mat = 0;

	while (count < argc)
	{
		if (isdigit(argv[count]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		mat = mat + atoi(argv[count]);
		count++;
	}

	printf("%i\n", mat);

	return (0);
}

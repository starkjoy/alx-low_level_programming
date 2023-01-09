#include <stdio.h>
#include <stdlib.h>

/**
 * isNumeric - checks if a string is a number or not
 * @str: string to  be checked
 * Return: 1
 */

int isNumeric(const char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
}

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
		if (isNumeric(argv[count]) == 0)
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

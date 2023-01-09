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
	int c[5];

	int cent[] = {1, 2, 5, 10, 25};

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}

	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");

	}

	else 
	{
		for (i = 0; i < cent[5]; i++)
		{
			c[0] = atoi(argv[1])/cent[0];
			c[1] = atoi(argv[1])/cent[1];
			c[2] = atoi(argv[1])/cent[2];
			c[3] = atoi(argv[1])/cent[3];
			c[4] = atoi(argv[1])/cent[4];
		}

		if (c[0] <= c[1] && c[0] <= c[2] && c[0] <= c[3] && c[0] <= c[4])
		{
			printf("%i\n", c[0]);
		}
		else if (c[1] <= c[0] && c[1] <= c[2] && c[1] <= c[3] && c[1] <= c[4])
		{
			printf("%i\n", c[1]);
		}
		else if (c[2] <= c[0] && c[2] <= c[1] && c[2] <= c[3] && c[2] <= c[4])
		{
			printf("%i\n", c[2]);
		}
		else if (c[3] <= c[0] && c[3] <= c[1] && c[3] <= c[2] && c[3] <= c[4])
		{
			printf("%i\n", c[3]);
		}
		else
		{
			printf("%i\n", c[4]);
		}
	}
	return (0);
}

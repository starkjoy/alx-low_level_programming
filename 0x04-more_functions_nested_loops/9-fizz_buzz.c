#include <stdio.h>

/**
 * main - main entry
 * Description: It prints fizz, buzz, fizzbuzz to satisfy conditions
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0 && i % 3 != 0 && i != 100)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			printf("%i", i);
			if (i == 100)
				continue;
			printf(" ");
		}
		printf("\n");
	}

	return (0);
}

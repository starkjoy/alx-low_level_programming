#include <stdio.h>

/**
 * main - entry point
 * Description: It computes a factor
 * Return: 0
 */

int main(void)
{
	long long int num = 612852475143;
	long long int largest_factor = 1;
	long long int i;


	for (i = 2; i <= num / i; i++)
	{
		if (num % i == 0)
		{
			while (num % i == 0)
			{
				num /= i;
			}
			largest_factor = i;
		}
	}
	if (num > 1)
	{
		largest_factor = num;
	}
	printf("%lld\n", largest_factor);

	return (0);
}

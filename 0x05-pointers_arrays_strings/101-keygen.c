#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program Entry
 * generate_random_char - generates random number
 * Description: Generates random valid passwords for program 101-crackme.
 * Return: 0
*/

char generate_random_char(void);

int main(void)
{
	char password[100];

	srand(time(NULL));

	for (int i = 0; i < 100; i++)
	{
		password[i] = generate_random_char();
	}

	password[99] = '\0';

	printf("%s\n", password);

	return (0);

}

char generate_random_char(void)
{
	int r = rand() % 62;

	if (r < 26)
	{
		return ('a' + r);
	}
	else if (r < 52)
	{
		return ('A' + (r - 26));
	}
	else
	{
		return ('0' + (r - 52));
	}
}

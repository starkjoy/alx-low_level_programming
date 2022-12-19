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
	int i;

	srand(time(NULL));

	for (i = 0; i < 10; i++)
	{
		password[i] = generate_random_char();
	}

	password[99] = '\0';

	printf("%s\n", password);

	return (0);

}

char generate_random_char(void)
{
	int r = rand() % 70;

	if (r < 26)
	{
		return ('a' + r);
	}
	else if (r < 52)
	{
		return ('A' + (r - 26));
	}
	else if (r < 62)
	{
		return ('0' + (r - 52));
	}
	else
	{
		char symbols[] = "!@#$^&*?";
		r = rand() % (sizeof(symbols) - 1);
		return symbols[r];
	}
}

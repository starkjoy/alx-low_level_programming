#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program Entry
 * Description: Generates random valid passwords for program 101-crackme.
 * Return: 0
*/

int main(void)
{
	int i = 0;
	int randomizer = 0;
	unsigned int seed;

	srand((seed)(time(NULL)));

	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnopqrstuvwxyz";
	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "!@#$^&*?";
	char password[];

	randomizer = rand() % 4;

	for (i = 0; i < N; i++)
	{
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}

	return (0);
}

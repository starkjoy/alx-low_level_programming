#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_random_char - generates random number
 * Description: Generates random valid passwords for program 101-crackme.
 * @N: accepts an integer
 * Return: void
*/

void generate_random_char(int N)
{
	int i;
	int randomizer;

	srand(time(0));

	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnopqrstuvwxyz";
	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "!@#$^&*?";
	char password[N];

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
		else if (randomizer == 3)
		{
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			prinf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			randomizer = rand()% 4;
			printf("%c", password[i]);
		}
	}
}

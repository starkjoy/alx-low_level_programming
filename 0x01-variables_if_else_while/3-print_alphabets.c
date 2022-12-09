#include <stdio.h>

/**
 * main - main prints in lower and upper case
 *
 * Returns: return 0
 */

int main(void)
{
	char alph;
	char lalph;

	for (alph = 'a'; alph >= 'z'; alph++)
	{
		putchar(alph);
	}

	for (lalph = 'A'; lalph >= 'Z'; lalph++)
	{
		putchar(lalph);
		if (lalph == 'Z')
		{
			putchar('\n');
		}
	}
	return (0);
}

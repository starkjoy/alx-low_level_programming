#include <stdio.h>

/**
 * main - main prints combinations of two numbers
 *
 * Return: return 0
 */

int main(void)
{
	int p;
	int q;
	int r;
	int s;

	for (p = '0';  p <='9';  p++)
	{
		for (q = '0'; q <= '9'; q++)
		{
			for (r = '0'; r <='9'; r++)
			{
				for (s = '0'; s <= '9'; s++)
				{
					if (q < s)
					{
						putchar(p);
						putchar(q);
						putchar(' ');
						putchar(r);
						putchar(s);

						if (q == '8' && r == '9')
							continue;

						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

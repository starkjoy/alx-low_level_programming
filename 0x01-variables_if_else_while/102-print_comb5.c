#include <stdio.h>


/**

 * main - Entry point

 *

 * Return: Always 0

*/



int main(void)

{

	int p, q, r, s;



	for (p = '0'; p <= '9'; p++)

	{

		for (q = '0'; q <= '8'; q++)

		{

		    for (r = '0'; r <= '9'; r++)

		    {

		        for (s = '0'; s <= '9'; s++)

		        {

			        if ((p == r) && (q == s))

			            continue;

			        putchar(p);

			        putchar(q);

			        putchar(' ');

			        putchar(r);

			        putchar(s);



			        if (p == 98 && q == 99)

				        continue;



			        putchar(',');

			        putchar(' ');

		        }

		    }

		}

	}



	putchar('\n');



	return (0);

}

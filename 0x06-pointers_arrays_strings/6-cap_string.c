#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * *cap_string - Makes sentence capitalize
 * Description: Capitalizes sentences
 * @c: accepts string
 */

char *cap_string(char *c)
{
	char *result;
	int i;
	
	int length = strlen(c);

	for (i = 0; i < length; i++)
	{
		if (i == 0 || isspace(c[i - 1]))
		{
			result = toupper(c[i]);
		}
	}

	return (*result);
}

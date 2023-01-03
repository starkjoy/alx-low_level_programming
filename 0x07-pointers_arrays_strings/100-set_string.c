#include <stdio.h>
#include <string.h>

/**
 * set_string - sets value of pointer to char
 * Description: sets value of pointer to char
 * @s: accepts pointer of pointer
 * @to: accepts char array
 * Return: return void
 */

void set_string(char **s, char *to)
{
	*s = to;
}

#include <stdio.h>
#include <string.h>

/**
 * _strspn - length of a prefix substring
 * Description: gets length of prefix substring
 * @s: accepts char array
 * @accept: accepts char array
 * Return: returns an unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int ref = strspn(s, accept);

	return (ref);
}

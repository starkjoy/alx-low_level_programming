#include <stdio.h>
#include <string.h>

/**
 * _strlen - display length of string
 * Description: lenght of string
 * @s: accepts a character
 * Return: returns an integer
 */

int _strlen(char *s)
{
	int char_length;
	char str_text;

	str_text = *s;
	char_length = strlen(str_text);

	return char_length;
}

#include <stdio.h>

void main_constructor(void) __attribute_((constructor));

/**
 * main_constructor - Contructor function printing message before main
 * Returns: void
 */

void main_contructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

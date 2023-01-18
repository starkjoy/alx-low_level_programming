#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc < 5)
	{
		printf("Error\n");
		exit(98);
	}

	if (strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-") != 0 && strcmp(argv[2], "*") != 0 && strcmp(argv[2], "/") != 0 && strcmp(argv[2], "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(argv[1], "0") == 0 && strcmp(argv[2], "/") == 0) || (strcmp(argv[1], "0") == 0 && strcmp(argv[2], "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	return (get_op_func(argv[2])(num1, num2));
}

#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char operator;

	if (argc < 5)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2] != '+' || argv[2] != '-' || argv[2] != '*' || argv[2] != '/' || argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if (argv[1] == '0' && argv[2] == '/' || argv[1] == '0' && argv[2] == '%')
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	return (get_op_func(operator)(num1, num2));
}

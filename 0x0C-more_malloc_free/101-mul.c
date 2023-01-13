#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    long unsigned int num1, num2, i;

    if (argc != 3)
    {
        printf("Error\n");
        exit(98);
    }

    for (i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Error\n");
            exit(98);
        }
    }
    for (i = 0; i < strlen(argv[2]); i++)
    {
        if (!isdigit(argv[2][i]))
        {
            printf("Error\n");
            exit(98);
        }
    }
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    if (num1 < 0 || num2 < 0)
    {
        printf("Error\n");
        exit(98);
    }
    printf("%ld\n", num1 * num2);
    return (0);
}

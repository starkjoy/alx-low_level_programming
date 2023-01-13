#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int *num1, *num2;
    long unsigned int i;

    if (argc != 3)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = malloc(sizeof(int));
    num2 = malloc(sizeof(int));
    if (num1 == NULL || num2 == NULL)
    {
        printf("Error\n");
        exit(98);
    }

    for (i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            free(num1);
            free(num2);
            printf("Error\n");
            exit(98);
        }
    }
    for (i = 0; i < strlen(argv[2]); i++)
    {
        if (!isdigit(argv[2][i]))
        {
            free(num1);
            free(num2);
            printf("Error\n");
            exit(98);
        }
    }
    *num1 = atoi(argv[1]);
    *num2 = atoi(argv[2]);
    if (*num1 < 0 || *num2 < 0)
    {
        free(num1);
        free(num2);
        printf("Error\n");
        exit(98);
    }
    printf("%d\n", (*num1) * (*num2));
    free(num1);
    free(num2);
    return (0);
}

#include <stdio.h>
#include <limits.h>

/**
 * _atoi - a function that converts string to integer
 * @s: An input string
 * Return: integer from conversion
 */

int _atoi(char *s)
{
    int sign = 1;
    unsigned int total = 0;
    
    if (*s == '-')
    {
        sign = -1;
        s++;
    }
    while (isdigit(*s))
    {
        total = total * 10 + (*s - '0');
        
        if (sign == 1 && total > INT_MAX)
            return INT_MAX;
        if (sign == -1 && -total < INT_MIN)
            return INT_MIN;
        s++;
    }
    return (total);
}

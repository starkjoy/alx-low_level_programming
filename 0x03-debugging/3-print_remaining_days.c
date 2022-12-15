#include "main.h"
#include <stdio.h>

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if (year % 4 == 0)
	{
		if ((month > 12 || month <= 0) || (day <= 0 || day > 31))
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		}
		else if (month == 1)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day);
		}
		else if (month == 2)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 335 - day);
		}
		else if (month == 3)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 306 - day);
		}
		else if (month == 4)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 275 - day); 
		}
		else if (month == 5)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 245 - day);
		}
		else if (month == 6)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 214 - day);
		}
		else if (month == 7)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 184 - day);
		}
		else if (month == 8)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 153 - day);
		}
		else if (month == 9)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 122 - day);
		}
		else if (month == 10)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 92 - day);
		}
		else if (month == 11)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 61 - day);
		}
		else if (month == 12)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 31 - days);
		}
	}
	else if (year % 4 != 0)
	{
		if ((month > 12 || month <= 0) || (day <= 0 || day > 31))
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		}
		else if (month == 1)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
		else if (month == 2)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 334 - day);
		}
		else if (month == 3)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 306 - day);
		}
		else if (month == 4)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 275 - days);
		}
		else if (month == 5)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 245 - day);
		}
		else if (month == 6)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 214 - day);
		}
		else if (month == 7)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 184 - day);
		}
		else if (month == 8)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 153 - day);
		}
		else if (month == 9)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 122 - day);
		}
		else if (month == 10)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 92 - day);
		}
		else if (month == 11)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 62 - day);
		}
		else if (month == 12)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 31 - day);
		}
	}
}

#include "main.h"

/**
 * print_last_digit - print last digit of a number.
 * @num: takes number input
 * return: lastDigit
 */
int print_last_digit(int num)
{
	int lastDigit = num % 10;

	if (lastDigit < 0)
		return (-lastDigit);
	return (lastDigit);
}

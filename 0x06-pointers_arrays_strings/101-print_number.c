#include "main.h"
#include <stdio.h>
/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = (n < 0) ? -n : n; // Handle negative numbers

	if (n < 0)
		putchar('-');
	if (n1 / 10 != 0)
		print_number(n1 / 10);
	putchar((n1 % 10) + '0');
}

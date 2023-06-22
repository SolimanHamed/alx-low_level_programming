#include "main.h"

/**
 * print_diganoal - print a diagonal line
 *
 * @n: is the number of times the / character
 * should be printed
 */

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
				putchar(' ');
			putchar(92); /*is equal to '/' char*/
			putchar('\n');
		}
	}
}

#include "main.h"

/**
 * print_rev - is a function to reverse string
 * @s: input from user
 */

void print_rev(char *s)
{
	int length = 0;
	int count = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (count = length; count > 0; count--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}

#include "main.h"

/**
 * print_rev - is a function to reverse string
 * @s: input from user
 */

void print_rev(char *s)
{
	if (s != NULL)
	{
		int length = 0;

		while (s[length] != '\0')
		{
			length++;
		}

		int i = length - 1;

		while (i >= 0)
		{
			putchar(s[i]);
		}
	}
	putchar('\n');
}

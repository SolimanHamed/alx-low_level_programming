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
		while (length > 0)
		{
			putchar(s[length]);
			length--;
		}
	}
	putchar('\n');
}

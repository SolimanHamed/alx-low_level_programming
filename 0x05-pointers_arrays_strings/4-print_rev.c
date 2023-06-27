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
		for (int i = length - 1; i >= 0; i--)
		{
			putchar(s[i]);
		}
	}
	putchar('\n');
}

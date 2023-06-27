#include "main.h"

/**
 * _puts - a function that takes char parametar to print it all
 * @str: takes char datatype
 */

void _puts(char *str)
{
	if (str != NULL)
	{
		int i = 0;

		while (str[i] != '\0')
		{
			putchar(str[i]);
			i++;
		}
	}
	putchar('\n');
}

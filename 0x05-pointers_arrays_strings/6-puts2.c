#include "main.h"

/**
 * puts2 - function print character only
 * @str: input from user
 */

void puts2(char *str)
{
	int length = 0;
	int s = 0;
	char *t = str;
	int x = 0;

	while (*t != '\0')
	{
		t++;
		length++;
	}
	s = length - 1;
	for (x = 0; x <= s; x++)
	{
		if (x % 2 == 0)
			putchar(str[x]);
	}
	putchar('\n');
}

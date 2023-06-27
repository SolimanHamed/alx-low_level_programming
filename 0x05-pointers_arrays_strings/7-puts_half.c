#include "main.h"

/**
 * puts_half - this function will print half of string
 * @str: input from user
 */

void puts_half(char *str)
{
	int x, y, length = 0;

	for (x = 0; str[x] != '\0'; x++)
		length++;
	y = (length / 2);
	if ((length % 2) == 1)
		y = ((length + 1) / 2);
	for (x = y; str[x] != '\0'; x++)
		putchar(str[x]);
	putchar('\n');
}

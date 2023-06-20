#include <stdio.h>

/**
 * main - Entry point
 *
 * description: checkout if its parameter c is lower case or upper case
 *
 * Return: (0)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1); /* is lower case return */
	}
	return (0);
}
int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');
	return (0);
}

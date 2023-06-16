#include <stdio.h>

/**
 * main - entry point
 * Description: print alphabet from a to z
 * Return: 0 (success)
 */

int main(void)
{
	char alpha = 97;

	while (alpha < 123)
	{
		putchar(alpha);
		alpha++;
	}
	return (0);
}

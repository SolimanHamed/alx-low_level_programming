#include <stdio.h>
/**
 * main - entry point
 * Description: print all alphabet from a to z and A to Z
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
	alpha = 65;

	while (alpha < 91)
	{
		putchar(alpha);
		alpha++;
	}
	printf("\n");
	return (0);
}

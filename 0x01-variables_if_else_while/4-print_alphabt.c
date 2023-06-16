#include <stdio.h>

/**
 * main - entry point
 * Description: a program that prints the alphabet in lowercase, Except e-q
 * Return: 0 (success)
 */

int main(void)
{
	char alpha = 97;

	while (alpha < 123)
	{
		if (alpha != 101 && alpha != 113)
		{
			putchar(alpha);
		}
		alpha++;
	}
	return (0);
}

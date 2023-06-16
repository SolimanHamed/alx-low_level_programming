#include <stdio.h>

/**
 * main - entry point
 * Description: print 0 - 9
 * Return: 0 (success)
 */

int main(void)
{
	int num = 48;

	do {
		putchar(num);
		num++;
	} while (num < 58);
	printf("\n");
	return (0);
}

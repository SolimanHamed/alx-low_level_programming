#include <stdio.h>

/**
 * main - entry point
 * Description: print 0 - 9
 * Return: 0 (success)
 */

int main(void)
{
	int num = 0;

	do {
		printf("%d", num);
		num++;
	} while (num < 10);
	printf("\n");
	return (0);
}

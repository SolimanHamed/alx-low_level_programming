#include <stdio.h>

/**
 * main - Entry point
 *
 * description: get the last digit
 *
 * Return: (0)
*/

int print_last_digit(int num)
{
	int lastDigit = num % 10;

	if (lastDigit < 0)
		return (-lastDigit);
	return (lastDigit);
}

int main(void)
{
	int r;

	printf("%d", print_last_digit(98));
	printf("%d", print_last_digit(0));
	printf("%d", print_last_digit(-1024));
	r = print_last_digit(-1024);
	putchar('0' + r);
	putchar('\n');
	return (0);
}

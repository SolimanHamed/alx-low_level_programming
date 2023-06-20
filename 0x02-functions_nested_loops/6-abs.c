#include <stdio.h>

/**
 * main - Entry point
 *
 * description: getting the absolute value
 *
 * Return: (0)
*/

int _abs(int num)
{
	if (num < 0)
		return (-num);
	return (num);
}

int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}

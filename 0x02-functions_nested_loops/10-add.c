#include <stdio.h>

/**
 * main - Entry point
 *
 * description: int add (int,int);
 *
 * Return: (0)
*/

int add(int x, int y)
{
	return (x + y);
}

int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}

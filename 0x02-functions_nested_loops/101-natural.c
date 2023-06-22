#include <stdio.h>

/**
 * Description: computes the sum of all
 * the multiples of 3 or 3
 * below 1024 (excluded)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sum = 0;

	for (int i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("The sum of all the multiples of 3 or 5 below 1024 is: %d\n", sum);
	return (0);
}

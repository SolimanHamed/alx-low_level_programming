#include <stdio.h>

/**
 * main - Entry point
 *
 * description: This program prints all natural numbers from a given input value (n) up to 98,
 *
 * Return: (0)
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

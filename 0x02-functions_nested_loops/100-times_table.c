#include "main.h"

/**
 * print_times_table - prints time table of n
 *
 * @n: takes number input
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			int product = i * j;

			if (j != 0)
				printf(", ");
			if (product < 10)
				printf(" ");
			printf("%d", product);
		}
		printf("\n");
	}
}

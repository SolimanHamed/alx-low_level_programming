#include <stdio.h>

/**
 * main - Entry point
 *
 * description: times table
 *
 * Return: (0)
*/

void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;
			printf("%2d", product);
			if (column != 9)
				printf(", ");
		}
		printf("\n");
	}
}

int main(void)
{
	times_table();
	return (0);
}

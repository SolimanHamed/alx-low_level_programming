#include "main.h"

/*
 * times_table - print the 9 times table
 *
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
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

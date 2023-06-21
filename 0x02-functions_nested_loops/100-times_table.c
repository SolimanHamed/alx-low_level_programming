#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print_times_table(int n)
 *
 * Return: (0)
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

int main(void)
{
	print_times_table(3);
	putchar('\n');
	print_times_table(5);
	putchar('\n');
	print_times_table(98);
	putchar('\n');
	print_times_table(12);
	return (0);
}

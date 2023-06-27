#include "main.h"

/**
 * print_array - display elements of array
 * @a: input
 * @n: input
 */

void print_array(int *a, int n)
{
	int i;
	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);
	if (i == (n - 1))
		printf("%d", a[n - 1]);
	printf("\n");
}

#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
*/

void print_alphabet_x10(void)
{
	char alpha = 'a';

	for (int i = 0 ; i < 10 ; i++)
	{
		while (alpha <= 122)
		{
			putchar(alpha);
			alpha++;
		}
		putchar('\n');
		alpha = 'a';
	}
}

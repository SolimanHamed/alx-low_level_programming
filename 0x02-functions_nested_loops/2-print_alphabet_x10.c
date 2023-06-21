#include <stdio.h>

/**
 * main - Entry point
 *
 * description: function that prints the alphabet 10 times
 *              the function will print all ascii table range 97-122
 * Return: (0)
*/

void print_alphabet(void)
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

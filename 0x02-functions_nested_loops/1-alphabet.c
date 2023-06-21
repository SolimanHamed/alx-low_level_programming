#include "main.h"

/**
 * main - Entry point
 *
 * description: function that prints the alphabet
 *		the function will print all ascii table range 97-122
 * Return: (0)
*/

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 122)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}

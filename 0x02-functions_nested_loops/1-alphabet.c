#include <stdio.h>

/**
 * main - Entry point
 *
 * description: function that prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: (0)
*/

void print_alphabet(void)
{
	char alpha = 'a';
	while(alpha <= 122)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return(0);
}

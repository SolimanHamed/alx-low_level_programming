#include "main.h"

/*
* _islower - function to check if
character is lowercase
* @c: checks input of function
* Return: returns 1 if 'c' is lowercase
otherwise always 0 (Success)
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

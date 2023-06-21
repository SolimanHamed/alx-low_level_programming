#include <unistd.h>
#include "main.h"

/**
 *print_alphabet - utilizes on the _putchar function to print
 *the alphabet a - z
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

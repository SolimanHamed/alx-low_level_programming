#include "main.h"

/**
 * rev_string - is a function to reverse string
 * @s: input from user
 */

void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int i = 0;

	while (s[count] != '\0')
		count++;
	for (i = 0; i < counter; i++)
	{
		count--;
		rev = s[i];
		s[i] = s[count];
		s[count] = rev;
	}
}

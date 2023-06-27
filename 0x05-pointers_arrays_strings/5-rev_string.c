#include "main.h"

/**
 * rev_string - is a function to reverse string
 * @s: input from user
 */

void rev_string(char *s)
{
	if (*s != NULL)
	{
		int length = 0;

		while (*s[length] != '\0')
			Length++;
		int start = 0;
		int end = length - 1;

		while (start < end)
		{
			char temp = s[start];

			s[start] = s[end];
			s[end] = temp;
			start++;
			end--;
		}
	}
}

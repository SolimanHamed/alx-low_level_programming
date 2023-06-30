#include "main.h"

/**
 * _strncpy - Copies a string with a specified maximum length.
 * @dest: The destination string.
 * @src: The source string to be copied.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (result);
}

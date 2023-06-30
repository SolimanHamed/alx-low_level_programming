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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (;i < n; i++)
		dest[i] = '\0';
	return (result);
}

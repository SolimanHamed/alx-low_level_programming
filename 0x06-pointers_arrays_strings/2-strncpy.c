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
	int i;

	/**
	 * iterate through src array
	 * where if there is no null byte
	 * among the first n bytes of source
	 * the string place in dest will not be
	 * null terminated
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/**
	 * if the length of the source is less than n
	 * write additional nullbytes to dest to
	 * ensure that a total of n byte is written
	 */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

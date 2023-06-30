#include "main.h"

/**
 * _strncat - function that concatenates two strings. with limits
 * @dest: first parameter to get value in it
 * @src: second parameter to get value in it
 * @n: the limit of concatenates
 * Return: (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest; /* lets store dest address to Result*/

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

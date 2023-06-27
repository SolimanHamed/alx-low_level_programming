#include "main.h"

/**
 * *_strcpy - function for copies string
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(strc + i) != '\0')
		i++;
	for ( ; j < i; j++)
		dest[j] = src[i];
	dest[i] = '\0';
	return (dest);
}

#include "main.h"

/**
 * _strcat - function that concatenated two strings
 * @dest: input parameter
 * @src: input parameter
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest; /* strore the initial address of dest*/

	/* find the end of the dest string*/
	while (*dest != '\0')
		dest++;

	/* append the characters from src to dest*/
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* terminating to null byte*/
	*dest = '\0';
		return (result);
}

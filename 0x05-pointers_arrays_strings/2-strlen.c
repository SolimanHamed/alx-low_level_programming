#include "main.h"
#include <stddef.h>
/**
 * _strLen - return the length of string
 * Description: return length of a string
 * @s: check if s is null or not
 * Return: length of string
 */

int _strLen(char *s)
{
	int length = 0;

	if (s != NULL)
	{
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
	}
	return (length);
}

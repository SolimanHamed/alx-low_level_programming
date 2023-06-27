#include "main.h"
#include <limits.h>

/**
 * _atoi - a function that convert string to intger
 * @s: an inuput from user to check and convert
 * Return: (Result);
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	if (*s == '\0')
		return (0);
	while (*s != '\0' && (*s < '0' || *s > '9'))
		s++;
	if (*(s - 1) == '-')
		sign = -1;
	while (*s != '\0' && *s >= '0' && *s <= '9')
	{
		int digit = *s - '0';

		if ((result > 0 && result > (INT_MAX - digit) / 10)
				|| (result < 0 && result < (INT_MIN + digit) / 10))
		{
			printf("Overflow occurred\n");
			return (0);
		}
		result = result * 10 + (sign * digit);
		s++;
	}
	return (result);
}

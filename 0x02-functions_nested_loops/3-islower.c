#include "main.h"

/**
 * _islower - checks if input is lower case
 * @c: the character
 *
 * Return: 1 if lowercase and 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
		return (1);
}

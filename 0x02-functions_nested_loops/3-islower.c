#include "main.h"

/**
 * _islower - checks if input is lower case
 * @c: the character
 *
 * Return: Always 0 (Success)
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

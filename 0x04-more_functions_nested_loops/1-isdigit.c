#include "main.h"

/**
 * _isdigit - checks if input is a number
 * @c: the input
 *
 * Return: 1 if c is a digit, othersie 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

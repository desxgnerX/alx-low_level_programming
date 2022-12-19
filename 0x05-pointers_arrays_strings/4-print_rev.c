#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		i++;
	}
	s--;

	for (i = lenght; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

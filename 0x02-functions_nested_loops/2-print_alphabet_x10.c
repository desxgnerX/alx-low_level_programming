#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char c = 'a';

	while (c <= 'z')
	{

		int i = 0;

	while (i <= 10)
	{
		_putchar(c);
		c++;
		i++;
	}
	}
	_putchar('\n');
}

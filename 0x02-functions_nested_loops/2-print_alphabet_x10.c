#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int c = 1;

	while (c <= 10)
	{

		char i = 'a';

	while (i <= 'z')
	{
		_putchar(c);
		i++;
	}
	c++;
	}
	_putchar('\n');
}

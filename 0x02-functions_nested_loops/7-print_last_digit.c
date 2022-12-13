#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @n: the number
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	_putchar(i);
	return (i);
}

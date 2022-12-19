#include "main.h"

/**
 * _strlen - prints length of string
 * @s: the string
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}

#include "main.h"

/**
 * *_strncat - concatenates two strings using at most n bytes
 * from src string
 * @src: the source string
 * @dest: the destination string
 * @n: number of bytes
 *
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0;

	while (count <= n)
	{
		*(dest + count) = *(src + count);
		count++;
	}
	return (dest);
}

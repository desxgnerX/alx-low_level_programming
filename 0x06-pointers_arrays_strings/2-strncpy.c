#include "main.h"

/**
 * *_strncpy - copies a string,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	for ( ; count2 < n; count2++)
		dest[i] = '\0';

	return (dest);
}

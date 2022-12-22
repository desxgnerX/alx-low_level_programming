#include "holberton.h"
/**
 * reverse_array - reverses an array
 * @a: the array of integers.
 * @n: the number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, b, c, d;

	for (c = n - 1, d = 0; c >= 0; c--, d++)
	{
		b[d] = a[c];
	}
	
	for (c = 0; c < n; c++)
	{
		a[c] = b[c];
	}
}

#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: the array of integers.
 * @n: the number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int temp, i;
	
	for(i = 0; i < n/2; i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + *(i - 1));
		*(a + *(i - 1)) = temp;
	}
}

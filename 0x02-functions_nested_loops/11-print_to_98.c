#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */
void print_to_98(int n)
{
	int i;
	for (i = n; i <= 98; i++)
	{
	printf("%d\n", i);
	}
}

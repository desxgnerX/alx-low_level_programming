#include "main.h"

/**
 * main -  largest prime factor
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int n;
	long int div = 2, ans = 0, maxFact;

	n = 612852475143;

	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
				printf("%d is the largest prime factor !", maxFact);
			break;
		}
	}
	return (0);
}

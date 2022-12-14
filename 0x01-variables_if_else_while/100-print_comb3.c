#include <stdio.h>

/**
 * main - all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = 0; digit2 < 10; digit2++)
		{
			if ((digit1 == 9 && digit2 == 9) && (digit1 == digit2))
				continue;
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

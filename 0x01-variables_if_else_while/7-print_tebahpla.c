#include <stdio.h>

/**
 * main - Print lowercase alphabet in reverse order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 26; i > 0; i--)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}

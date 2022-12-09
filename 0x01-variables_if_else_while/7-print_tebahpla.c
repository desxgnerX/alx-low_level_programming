#include <stdio.h>

/**
 * main - Print lowercase alphabet in reverse order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph[26] = "zyxwvutsrqpomnlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}

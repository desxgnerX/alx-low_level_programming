#include <stdio.h>

/**
 * main - Print alphabet lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char upperalph[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char loweralph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(loweralph[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(upperalph[i]);
	}
	putchar('\n');
	return (0);
}

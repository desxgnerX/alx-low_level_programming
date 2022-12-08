#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	char b;
	long c;
	double d;
	float e;

	printf("Size of a char: %lu byte(s) \n", (unsigned long) sizeof(b));
	printf("Size of an int: %lu byte(s) \n", (unsigned long) sizeof(a));
	printf("Size of a long int: %lu byte(s) \n", (unsigned long) sizeof(c));
	printf("Size of a long long int: %lu byte(s) \n", sizeof(long long int));
	printf("Size of a float: %lu byte(s) \n", (unsigned long) sizeof(e));
	return (0);
}

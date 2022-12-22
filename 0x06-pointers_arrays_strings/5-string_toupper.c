#include "main.h"
/**
 * *string_toupper - converts to uppercase
 * @a: the array.
 * Return: char
 */

char *string_toupper(char *a)
{
	int count;
	
	for (i = 0; *(a + count)!='\0'; i++)
	{
		if(*(a + count) >= 'a' && *(a + count) <= 'z')
		{
			*(a + count) = *(a + count) - 32;
		}
	}
	return (a);
}

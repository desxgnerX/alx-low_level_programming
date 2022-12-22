#include "main.h"
/**
 * *string_toupper - converts to uppercase
 * @a: the array.
 * Return: char
 */

char *string_toupper(char *a)
{
	for (i = 0; s[i]!='\0'; i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
}

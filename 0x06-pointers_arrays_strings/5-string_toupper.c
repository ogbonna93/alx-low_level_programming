#include "main.h"
/**
 * string_toupper - a function which changes all lowercase to uppercase
 * @n: is a pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int r;

	r = 0;
	while (n[r] != '\0')
	{
		if (n[r] >= 'a' && n[r] <= 'z')
			n[r] = n[r] - 32;
		r++;
	}
	return (n);
}

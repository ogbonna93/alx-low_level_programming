#include "main.h"
/**
 * _strncpy - a function which copies a string
 * @dest: is an input value
 * @src: is an input value
 * @n: is an input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m;

	m = 0;
	while (m < n && src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}

	return (dest);
}

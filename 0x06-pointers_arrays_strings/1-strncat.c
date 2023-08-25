#include "main.h"
/**
 * _strncat - is a function that concatenate two strings
 * let n bytes be the most bytes used from src
 * @dest: is an input value
 * @src: is an input value
 * @n: is also an input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m;
	int k;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
	dest[m] = src[k];
	m++;
	k++;
	}
	dest[m] = '\0';
	return (dest);
}

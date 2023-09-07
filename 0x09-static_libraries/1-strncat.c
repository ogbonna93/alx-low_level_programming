#include "main.h"
/**
 * _strncat - a function which concatenate two strings
 * using at most n bytes from src
 * @dest: represents input value
 * @src: respresents input value
 * @n: represents input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int m;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	k = 0;
	while (k < n && src[m] != '\0')
	{
	dest[k] = src[m];
	k++;
	m++;
	}
	dest[k] = '\0';
	return (dest);
}

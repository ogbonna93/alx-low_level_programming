#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: represents the input value
 * @src: represents the input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int b;
	int f;

	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	f = 0;
	while (src[f] != '\0')
	{
		dest[b] = src[f];
		b++;
		f++;
	}

	dest[b] = '\0';
	return (dest);
}


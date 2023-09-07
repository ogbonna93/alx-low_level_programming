#include "main.h"

/**
 * char *_strcpy - represents function that copies string pointed to by src
 * @dest: represnts the destination to copy to
 * @src: represents the space to copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int w = 0;
	int y = 0;

	while (*(src + w) != '\0')
	{
		w++;
	}
	for ( ; y < w ; y++)
	{
		dest[y] = src[y];
	}
	dest[w] = '\0';
	return (dest);
}

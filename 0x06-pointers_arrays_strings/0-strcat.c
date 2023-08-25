#include "main.h"
/**
 * _strcat - is a function that concatenates two strings
 * @dest: is an input value
 * @src: is an input value
 *
 * Return: if successful should return void
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[y] = '\0';
	return (dest);
}


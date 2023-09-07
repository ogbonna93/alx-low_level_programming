#include "main.h"
#include <stddef.h>

/**
 * _strchr - represents the entry point
 * @s: represents the input value
 * @c: represents the input value
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int y = 0;

	for (y = 0; s[y] >= '\0'; y++)
	{
		if (s[y] == c)
			return (&s[y]);
	}
	return (0);
}

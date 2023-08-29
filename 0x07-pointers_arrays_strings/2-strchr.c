#include "main.h"
/**
 * _strchr - Entry point, function that locates a character in a string
 * @s: is an input
 * @c: is also an input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}

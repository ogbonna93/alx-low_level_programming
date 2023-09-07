#include "main.h"
/**
 * _strpbrk - represents the entry point
 * @s: represents input value
 * @accept: represents input value
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
		if (*s == accept[y])
		return (s);
		}
	s++;
	}

return ('\0');
}

#include "main.h"
/**
 * _strspn - represents the entry point
 * @s: represents an input value
 * @accept: represents an input value
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
			{
				k++;
				break;
			}
			else if (accept[m + 1] == '\0')
				return (k);
		}
		s++;
	}
	return (k);
}

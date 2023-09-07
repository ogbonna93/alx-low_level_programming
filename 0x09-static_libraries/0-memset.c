#include "main.h"
/**
 * _memset - the function fills a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: represents the output  value
 * @n: represents the number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{

	for (int j = 0; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}

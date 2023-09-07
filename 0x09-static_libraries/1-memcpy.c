#include "main.h"
/**
 *_memcpy - represents a function that copies memory area
 *@dest: represents the memory where the data is stored
 *@src: represents the memory where the data is copied
 *@n: represents number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}

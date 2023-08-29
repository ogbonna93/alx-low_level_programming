#include "main.h"
/**
 * _strstr - The function is one that locates a substring
 * @haystack: an input
 * @needle: also an input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *w = needle;

		while (*k == *w && *w != '\0')
		{
			k++;
			w++;
		}

		if (*w == '\0')
			return (haystack);
	}

	return (0);
}

#include "main.h"
/**
 * _strlen - is a function that returns the length of a string
 * @s: represents a string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}

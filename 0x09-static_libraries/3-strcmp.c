#include "main.h"
/**
 * _strcmp - This function compare string values
 * @s1: represents the first input value
 * @s2: represents the second input value
 *
 * Return: s1[j] - s2[j]
 */
int _strcmp(char *s1, char *s2)
{
	int j;

	j = 0;
	while (s1[j] != '\0' && s2[j] != '\0')
	{
		if (s1[j] != s2[j])
		{
			return (s1[j] - s2[j]);
		}
	j++;
	}
	return (0);
}

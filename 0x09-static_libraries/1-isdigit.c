#include "main.h"

/**
 * _isdigit - is responsible for checking for a digit (from 0 to 9)
 * @c: integer to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

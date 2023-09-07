#include "main.h"

/**
 * _isalpha - responsible for checking for alphabetic character
 * @c: represents the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

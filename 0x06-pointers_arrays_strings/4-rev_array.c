#include "main.h"
/**
 * reverse_array - a function which reverses content of an array of integers
 * @a: is an array
 * @n: is a number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int f;
	int r;

	for (f = 0; f < n--; f++)
	{
		r = a[f];
		a[f] = a[n];
		a[n] = r;
	}
}

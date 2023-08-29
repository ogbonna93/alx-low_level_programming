#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two integers
 * @a: is an input
 * @size: is an input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sigma1, sigma2, k;

	sigma1 = 0;
	sigma2 = 0;

	for (k = 0; k < size; k++)
	{
		sigma1 = sigma1 + a[k * size + k];
	}
	for (k = size - 1; k >= 0; k--)
	{
		sigma2 += a[k * size + (size - k - 1)];
	}
	printf("%d, %d\n", sigma1, sigma2);
}

#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array
 * @n: number of elements of thye array
 * Return: dest
 */
void reverse_array(int *a, int n);
{
	int i;
	int l;

	for (i = 0; i < n; i++)
	{
		n--;
		l = a[i];
		a[i] = a[n];
		a[n] = l;
	}
}

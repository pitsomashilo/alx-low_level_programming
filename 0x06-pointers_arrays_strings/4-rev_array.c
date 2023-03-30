#include "main.h"

/**
 * reverse_array - reverses the order of the elements of an array
 * @a: an array
 * @n: an integer
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int k;
	int b[50];

	i = 0;
	for (j = n - 1; j >= 0; j--)
	{
		b[i] = a[j];
		i++;
	}

	for (k = 0; k < n; k++)
	{
		a[k] = b[k];
	}
}

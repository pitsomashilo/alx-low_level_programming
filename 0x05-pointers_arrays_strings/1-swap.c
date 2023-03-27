#include "main.h"

/**
 * swap_int - swaps the value of two integers.
 * @a: an integer
 * @b: an integer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}


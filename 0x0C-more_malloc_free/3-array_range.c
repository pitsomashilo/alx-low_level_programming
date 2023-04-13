#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: integer - minimum value in the array
 * @max: integer - maximum value in the array
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int i; /* counter */
	int size;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	array = malloc(size * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}


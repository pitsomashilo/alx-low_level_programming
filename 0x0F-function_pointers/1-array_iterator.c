#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array
 * @array: an array of integers
 * @size: the size of the array
 * @action: the function to be executed on each element of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array != NULL && action != NULL && size != 0)
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}

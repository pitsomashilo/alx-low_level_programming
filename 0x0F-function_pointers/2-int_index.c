#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: an array of integers
 * @size: size of the array
 * @cmp: the function to be executed
 *
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);
			if (result != 0)
			{
				result = i;
				break;
			}
			else if (i == size - 1 && result == 0)
			{
				result = -1;
			}
		}
	return (result);
}

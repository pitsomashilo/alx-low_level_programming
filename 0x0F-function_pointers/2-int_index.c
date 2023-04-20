#include "function_pointers.h"
#include <stdio.h>
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
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	else if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				result = i;
				break;
			}
			else
			{
				result = -1;
			}
		}
	}
	return (result);
}

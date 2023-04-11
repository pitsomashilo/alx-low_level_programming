#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a specific
 * char
 * @size: integer
 * @c: character
 *
 * Return: NULL if size is zero, returns pointer otherwise
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}
	else
	{
		free(array);
		return (NULL);
	}
	return (array);
}

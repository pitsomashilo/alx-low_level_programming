#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocated memory for an array of nmemb elements of size bytes
 * @nmemb: unsigned integer - number of elements
 * @size: integer - byte size
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}

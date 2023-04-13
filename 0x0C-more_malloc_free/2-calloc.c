#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * _calloc - allocated memory for an array of nmemb elements of size bytes
 * @nmemb: unsigned integer - number of elements
 * @size: integer - byte size
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size);
void *_memset(void *s, int b, unsigned int n);

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = nmemb * size;
	ptr = malloc(s);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}

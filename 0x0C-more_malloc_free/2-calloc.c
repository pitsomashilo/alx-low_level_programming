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
void *_calloc(unsigned int nmemb, unsigned int size);
void *_memset(void *s, int b, unsigned int n);

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
	ptr = _memset(ptr, 0, sizeof(ptr));
	return (ptr);
}
#include "main.h"

/**
 * _memset - fills the first n bytes of the memeory area pointed to by s with
 * constant byte b
 * @s: address
 * @b: constant byte
 * @n: unsigned integer
 *
 * Return: a pointer to the memory area s
 */
void *_memset(void *s, int b, unsigned int n)
{
	unsigned int i; /* counter variable */

	for (i = 0; i < n; i++)
	{
		*((int *)s + i) = b;
	}
	return (s);
}

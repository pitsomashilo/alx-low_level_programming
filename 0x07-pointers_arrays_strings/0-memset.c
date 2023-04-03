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
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i; /* counter variable */

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

#include "main.h"

/**
 * _memcpy - copies n bytes from the memeory area src to memory area dest
 * @dest: destination address
 * @src: source area
 * @n: unsigned integer
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i; /* counter variable */
	unsigned int s; /* size of src */
	unsigned int d; /* size of dest */

	s = sizeof(src);
	d = sizeof(dest);

	if (d <= s) /* checks to ensure no memory overlap */
	{
		for (i = 0; i < n; i++)
		{
			*(dest + i) = src[i];
		}
	}
	return (dest);
}

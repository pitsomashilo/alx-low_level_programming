#include "main.h"

/**
 * _strncpy - copies n bytes of a string
 * @dest: string destination
 * @src: string to be copied
 * @n: integer
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i; /* counter */

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

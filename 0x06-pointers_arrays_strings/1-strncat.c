#include "main.h"

/**
 * _strncat - copies a string
 * @dest: string destination
 * @src: string to be copied
 * @n: integer
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n);
int _strlen(char *s);

char *_strncat(char *dest, char *src, int n)
{
	int ld; /* length of destination string */
	int ls; /* length of source string */
	int i; /* counter */
	int j;

	ld = _strlen(dest);
	ls = _strlen(src);
	j = (n > ls) ? n = ls : n;

	for (i = 0; i < j; i++)
	{
		if (dest[ld] == '\0' && i == 0)
		{
			dest[ld] = src[i];
			ld++;
		}
		else if (src[i] != '\0')
		{
			dest[ld] = src[i];
			ld++;
		}
	}
	return (dest);
}
/**
 * _strlen - returns the length of a string
 * @s: a string
 * Return: len
 */
int _strlen(char *s)
{
	int len;
	int i;

	i = 0;
	len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

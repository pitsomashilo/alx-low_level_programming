#include "main.h"

/**
 * _strcat - copies a string
 * @dest: string destination
 * @src: string to be copied
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src);
int _strlen(char *s);

char *_strcat(char *dest, char *src)
{
	int ld; /* length of destination string */
	int ls; /* length of source string */
	int i; /* counter */

	ld = _strlen(dest);
	ls = _strlen(src) + 1;

	for (i = 0; i < ls; i++)
	{
		if (dest[ld] == '\0' && i == 0)
		{
			dest[ld] = src[i];
			ld++;
		}
		else
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

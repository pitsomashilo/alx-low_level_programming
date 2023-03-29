#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: string destination
 * @src: string to be copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = _strlen(src) + 1;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
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

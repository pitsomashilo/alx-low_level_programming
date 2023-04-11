#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a new string which is a duplicate of the
 * string str
 * @str: a atring
 *
 * Return: NULL if str is NULL, pointer to duplicated string otherwise
 */
char *_strdup(char *str);
int _strlen(char *s);

char *_strdup(char *str)
{
	int i; /* counter */
	int len; /* length of string */
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	len = _strlen(str);
	dup = malloc(len * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			dup[i] = str[i];
		}
	}
	return (dup);
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

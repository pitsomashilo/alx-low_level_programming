#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: unsigned integer
 *
 * Return: NULL on failure, otherwise pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);
int _strlen(char *s);

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_one; /* length of first string */
	unsigned int len_two; /* length of second string */
	unsigned int len; /* length of new string */
	unsigned int i; /* counter */
	unsigned int j; /* counter */
	char *new_string;

	if (s1 == NULL)
	{
		s1 = "";

	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL && s2 == NULL)
	{
		new_string = "";
	}
	len_one = _strlen(s1);
	len_two = _strlen(s2);

	len = (n >= len_two) ? len_one + len_two : len_one + n;
	new_string = malloc(len * sizeof(char) + 1);
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_one; i++)
	/* copies contents of first string into new memory blocks */
	{
		if (len_one != 0)
		{
			new_string[i] = s1[i];
		}
	}
	for (j = 0; j < n; j++)
	{
		if (new_string[len] == '\0' && len_two != 0)
		{
			new_string[len_one] = s2[j];
			len_one++;
		}
		else if (len_two != 0)
		{
			new_string[len_one] = s2[j];
			len_one++;
		}
	}
	new_string[len] = '\0';
	return (new_string);
}
/**
 * _strlen - returns the length of a string
 * @s: a string
 * Return: len
 */
int _strlen(char *s)
{
	unsigned int len;
	unsigned int i;

	i = 0;
	len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

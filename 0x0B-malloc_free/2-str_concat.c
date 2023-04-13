#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 *
 * Return: NULL on failure, otherwise pointer to new string
 */
char *str_concat(char *s1, char *s2);
int _strlen(char *s);

char *str_concat(char *s1, char *s2)
{
	int len_one; /* length of first string */
	int len_two; /* length of second string */
	int len; /* length of new string */
	int i; /* counter */
	int j; /* counter */
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
	len = len_one + len_two;

	new_string = malloc(len * sizeof(char));
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		if (len_one != 0)
		{
			new_string[i] = s1[i];
		}
	}
	for (j = 0; j < len_two; j++)
	{
		if (new_string[len_one] == '\0' && len_two != 0)
		{
			new_string[len_one] = s2[j];
			len_one++;
		}
		else if (len_two != 0 && s2[j] != '\0')
		{
			new_string[len_one] = s2[j];
			len_one++;
		}
		else if (s2[j] == '\0')
		{
			break;
		}
	}
	return (new_string);
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

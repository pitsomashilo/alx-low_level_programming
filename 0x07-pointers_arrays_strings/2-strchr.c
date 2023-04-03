#include "main.h"

/**
 * _strchr - returns a pointer to the first occurrenece of character c in the
 * string s, or NULL if the character is not found
 * @s: string
 * @c: character
 *
 * Return: pointer to first occurrence of the character or NULL
 */
char *_strchr(char *s, char c)
{
	int i; /* counter variable */
	int l; /* length of string */
	char *result;
	char *NULL = ((void*)0);

	l = sizeof(s);

	for (i = 0; i < l; i++)
	{
		if (s[i] != c)
		{
			continue;
		}
		else if (s[i] == c)
		{
			result = &s[i];
			break;
		}
		else if (s[i] == (l - 1) && s[i] != c)
		{
			result = NULL;
		}
	}
	return (result);
}

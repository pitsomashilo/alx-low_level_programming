#include "main.h"

/**
 * _strstr - returns pointer to the beginning of the located substring or NULL
 * @haystack: main string
 * @needle: substring
 *
 * Return: pointer to first occurrence of the character or NULL
 */
char *_strstr(char *haystack, char *needle);
int _strcmp(char *s1, char *s2);

char *_strstr(char *haystack, char *needle)
{
	int i; /* counter variable */
	int l; /* length of string */
	int n; /* store result of _strcmp */
	char *sub;
	char *result;
	char *NULL;

	l = sizeof(haystack);
	i = 0;
	NULL = ((void *)0);

	for (i = 0; i < l; i++) /* looping through *s */
	{
		if (haystack[i] != needle[0])
		{
			continue;
		}
		else if (haystack[i] == needle[0])
		/* checking if character in s matches charater in accept */
		{
			sub = &haystack[i];
			n = _strcmp(needle, sub);
			if (n == 0)
			{
				result = sub;
			}
			else
			{
				continue;
			}
		}
		else
		{
			result = NULL;
		}
	}
	return (result);
}
/**
 * _strcmp - compares strings
 * @s1: a string
 * @s2: a string
 *
 * Return: the result
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int result;


	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			break;
		}
		else if (s1[i] == s2[i])
		{
			result = (s1[i] == s2[i]) ? s1[i] - s2[i] : s1[i] - s2[i];
		}
	}
	return (result);
}

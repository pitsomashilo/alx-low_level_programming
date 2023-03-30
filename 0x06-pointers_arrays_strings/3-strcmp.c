#include "main.h"

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

	if (s1[0] != s2[0])
	{
		result = s1[0] - s2[0];
	}
	else
	{
		for (i = 0; s1[i]; i++)
		{
			result = (s1[i] == s2[i]) ? 0 : s1[i] - s2[i];
		}
	}
	return (result);
}

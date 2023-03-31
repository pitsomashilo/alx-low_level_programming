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

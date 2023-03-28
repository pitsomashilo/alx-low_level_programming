#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints a string in reverse
 * @s: a string
 */
void rev_string(char *s);
int _strlen(char *s);

void rev_string(char *s)
{
	int len;
	int a;
	int i;
	int j;
	char new_str[100];

	len = _strlen(s);
	i = 0;

	for (a = len; a >= 0; a--)
	{
		if (s[a] == '\0')
		{
			continue;
		}
		else
		{
			new_str[i] = s[a];
			i++;
		}
	}

	for (j = 0; j <= len; j++)
	{
		if (new_str[j] == '\0')
		{
			continue;
		}
		else
		{
			s[j] = new_str[j];
		}
	}
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

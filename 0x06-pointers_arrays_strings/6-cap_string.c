#include "main.h"

/**
 * char *cap_string - capitalizes all words of a string
 * @str: string
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int i;
	int j;

	for (i = 0; str[i]; i++)
	{
		j = i + 1;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' ||
		str[i] == '?' || str[i] == '\"' || str[i] == '(' || str[i] == ')' ||
		str[i] == '{' || str[i] == '}')
		{
			(str[j] >= 97 && str[j] <= 122) ? str[j] = str[j] - 32 : str[j];
		}
		else if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}
	}
	return (str);
}

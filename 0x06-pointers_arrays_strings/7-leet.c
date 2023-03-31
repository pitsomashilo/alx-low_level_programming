#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: string
 * Return: capitalized string
 */
char *leet(char *str)
{
	int i;
	int j;

	int leet[5] = {52, 51, 55, 48, 49};
	/* array to store numbers to be substituted into string */
	char upper[5] = {'A', 'E', 'T', 'O', 'L'};
	/* array to store uppercase letters to be matched */
	char lower[5] = {'a', 'e', 't', 'o', 'l'};
	/* array to store lowercase letters to be matched */

	j = 0;
	while (j < 5)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] == upper[j] || str[i] == lower[j])
			{
				str[i] = leet[j];
			}
		}
		j++;
	}
	return (str);
}

#include "main.h"

/**
 * _strpbrk - returns a pointer to the first occurrenece of character c in the
 * string s, or NULL if the character is not found
 * @s: string
 * @accept: string
 *
 * Return: pointer to first occurrence of the character or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i; /* counter variable */
	int j; /* counter variable */
	int l; /* length of string */
	int la; /* length of accept */
	char *result;
	char *NULL;

	l = sizeof(s);
	la = sizeof(accept);
	i = 0;
	NULL = ((void *)0);

	while (i < l) /* looping through *s */
	{
		for (j = 0; j < la; j++) /* looping through accept */
		{
			if (s[j] != accept[i])
			{
				continue;
			}
			else if (s[j] == accept[i])
		/* checking if character in s matches charater in accept */
			{
				result = &s[j];
				break;
			}
			else if (s[j] == (l - 1) && s[j] != accept[i])
			{
				result = NULL;
			}
		}
		i++;
	}
	return (result);
}

#include "main.h"

/**
 * _strspn - returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 * @s: string
 * @accept: string
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{

	int i; /* counter variable */
	int j; /* counter variable */
	int l; /* legnth of *s */
	int la; /* length of *accept */
	unsigned int r; /* result to be returned */


	l = sizeof(s);
	la = sizeof(accept);
	i = 0;
	r = 0;

	while (i < l) /* looping through *s */
	{
		for (j = 0; j < la; j++) /* looping through *accept */
		{
			if (s[j] == accept[i])
		/* checking if character in *s matches character in *accept */
			{
				r++;
			}
		}
		i++;
	}
	return (r);
}

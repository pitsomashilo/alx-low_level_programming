#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * check_characters - checks whether characters are numbers
 * @k: integer
 * @l: integer
 * @num: array of characters
 *
 * Return: 1 on error, 0 on success
 */
int check_characters(int k, int l, char *num)
{
	int m; /* holds int converted from a digit in number taken from argv */

	for (l = 0; l < k; l++) /* loops through each digit in a number */
	{
		m = atoi(&num[l]); /* converts from char to int */
		if (num[l] != '0' && m == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			continue;
		}
	}
	return (0);
}
/**
 * main - adds positive numbers
 * @argc: integer
 * @argv: array of strings
 *
 * Return: 0 on success, 1 if error
 */
int main(int argc, char *argv[])
{
	int i; /* counter for outer for loop */
	int j; /* holds integer converted from char taken from argv */
	int k; /* the length of a number from argv */
	int l;
	int sum;
	int result;
	char *num;

	sum = 0;
	for (i = 1; i < argc; i++) /* loops through argv */
	{
		if (argc == 1)
		{
			printf("%d\n", 0);
			break;
		}
		k = strlen(argv[i]); /* checks the length of a number */
		if (k > 1)
		{
			num = argv[i];
			l = 0;
			result = check_characters(k, l, num);
			if (result == 1)
			{
				return (1);
			}
		}
		j = atoi(argv[i]); /* converts number from char to int */
		if (j == 0 && *argv[i] != '0')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + j;
		}
	}
	printf("%d\n", sum);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * main - multiplies two numbers and prints the result
 * @argc: integer
 * @argv: array of strings
 *
 * Return: 0 on success, 1 if fails
 */
int main(int argc, char *argv[]);
int check_characters(int j, int k, char *num);
int count_digits(int a);
int _strlen(char *c);

int main(int argc, char *argv[])
{
	int i, j, k; /* i, k - counters for loops. j - length of argv[i] */
	int len; /* length of number */
	int num1; /* first number */
	int num2; /* second number */
	int product; /* result of num1 multiplied by num2 */
	char *p; /* pointer to store product turned to char from int */
	int result; /* result of check character function */
	char *num; /* argv[i] */

	if (argc == 1 || argc < 3 || argc > 3) /* checks number of args */
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++) /* loops through argv */
	{
		j = _strlen(argv[i]); /* checks the length of a number */
		if (j > 1)
		{
			num = argv[i];
			k = 0;
			result = check_characters(j, k, num);
			if (result == 1)
			{
				exit(98);
			}
		}
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
	}
	product = num1 * num2;
	len = count_digits(product);
	p = malloc(len);
	if (p == NULL)
	{
		exit(98);
	}
	for (i = 0; i < len; i++)
	{
		p[i] = (product % 10) + '0';
		product = product / 10;
	}
	len = len - 1;
	for (; len >= 0; len--)
	{
		_putchar(p[len]);
	}
	_putchar('\n');
	return (0);
}
/**
 * check_characters - checks whether characters are numbers
 * @j: integer
 * @k: integer
 * @num: array of characters
 *
 * Return: 1 on error, 0 on success
 */
int check_characters(int j, int k, char *num)
{
	int m; /* holds int converted from a digit in number taken from argv */

	for (k = 0; k < j; k++) /* loops through each digit in a number */
	{
		m = atoi(&num[k]); /* converts from char to int */
		if (num[k] != '0' && m == 0)
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
 * count_digits - checks the number of digits in a number
 * @a: an integer
 *
 * Return: integer - number of digits
 */
int count_digits(int a)
{
	int digits;

	digits =  0;
	do {
		a /= 10;
		++digits;
	} while (a != 0);

	return (digits);
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

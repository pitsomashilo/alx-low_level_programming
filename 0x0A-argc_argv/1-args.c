#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: integer
 * @argv: array of strings
 *
 * Return: 0 Always
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: integer
 * @argv: array of strings
 *
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}

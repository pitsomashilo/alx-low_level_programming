#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers and prints the result
 * @argc: integer
 * @argv: array of strings
 *
 * Return: 0 on success, 1 if fails
 */
int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc == 1 || argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);

		printf("%d\n", i * j);
	}
	return (0);
}

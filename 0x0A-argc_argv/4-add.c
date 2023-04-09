#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: integer
 * @argv: array of strings
 *
 * Return: 0 on success, 1 if error
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (argc == 1)
		{
			printf("%d\n", 0);
			break;
		}
		j = atoi(argv[i]);
		if (j != 0)
		{
			sum = sum + j;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}


#include <stdio.h>

/**
 * main - prints all arguments it receives followed by new line
 * @argc: integer
 * @argv: array of strings
 *
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
	{
		printf("%s\n", argv[argc - 1]);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}

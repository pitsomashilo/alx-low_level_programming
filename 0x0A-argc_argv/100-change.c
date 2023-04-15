#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: integer
 * @argv: array of strings
 *
 * Return: 0 on success, 1 if fails
 */
int main(int argc, char *argv[])
{
	int i, j, k, coins;
	int arr[5] = {25, 10, 5, 2, 1};

	coins = 0;
	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	for (j = 0; j < 6; j++)
	{
		if (i / arr[j] == 0 && i % arr[j] == i)
		{
			continue;
		}
		if (i / arr[j] != 0 && i % arr[j] != i)
		{
			coins = coins + (i / arr[j]);
			k = i / arr[j];
			i = i - (k * arr[j]);
		}
	}
	printf("%d\n", coins);
	return (0);
}

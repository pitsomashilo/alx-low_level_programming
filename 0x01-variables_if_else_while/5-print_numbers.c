#include <stdio.h>

/**
 * main - prints all single digit base 10 numbers satring from 0
 * Return: 0
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints a string
 *
 * The program will assign a random number to the variable n each time it is
 * executed and the printed string will state whether the number is a
 * negative or postive integer or whether it is zero.
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%ld is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%ld is negative\n", n);
	}
	else
	{
		printf("%ld is positive\n");
	}
	return (0);
}


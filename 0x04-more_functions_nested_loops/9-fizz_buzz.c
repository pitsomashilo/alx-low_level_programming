#include <stdio.h>

/**
 * main - prints numbers from 0 to 100
 *
 * The program prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three, it prints Fizz and for the multiples of
 * five, it prints Buzz. For numbers that are multiples of both three and
 * five, it prints FizzBuzz.
 * Return: 0
 */
int main(void)
{
	int a = 1;

	while (a < 100)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", a);
		}
		a++;
	}
	printf("\n");
	return (0);
}


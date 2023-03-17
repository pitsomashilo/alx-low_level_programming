#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints a string describing the last digit of the number stored in n
 *
 * The program assigns a random number to n every time it is executed, finda
 * the last digit in the number stored in n and states whether the last digit
 * is greater than 5, is zero or is less than 6 and not zero.
 * Return: 0
 */
int main(void)
{
	
	int y = 10;
	char str[] = "Last digit of";
	int n; 
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % y != 0 && n % y < 6)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, (n %y));
	}
	else if (n % y == 0)
	{
		printf("%s %d is %d and is 0\n", str, n, (n %y));
	}
	else if (n % y > 5)
	{
		printf("%s %d is %d and is greater than 5\n", str, n, (n % y));
	}
	return (0);
}

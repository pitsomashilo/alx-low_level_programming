#include <stdio.h>

/**
 * main - prints possible combination of single-digit numbers.
 * Return: 0
 */
int main(void)
{
	int a = 48;
	int comma = 44;
	int space = 32;
	int nl = 10;

	while (a < 58)
	{
		putchar(a);
		if (a == 57)
		{
			putchar(nl);
			break;
		}
		else
		{
			putchar(comma);
			putchar(space);
			a++;
		}
	}
	return (0);
}

#include <stdio.h>

/**
 * main - prints lowercase alphabet except q and e, followed by new line.
 * Return: 0
 */
int main(void)
{
	char a = 97;
	char space = '\n';

	while (a < 123)
	{
		if (a == 101 || a == 113)
		{
			a = a + 1;
			continue;
		}
		else
		{
			putchar(a++);
		}
	}
	putchar(space);
	return (0);
}

#include <stdio.h>
/**
 * print_array - prints the elements of an array
 * @a: an arry
 * @n: an integer
 */
void print_array(int *a, int n)
{
	int i;
	
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				printf("%d\n", a[i]);
			}
			else
			{
				printf("%d, ", a[i]);
			}

		}
	}
	else
	{
		printf("\n");
	}
}

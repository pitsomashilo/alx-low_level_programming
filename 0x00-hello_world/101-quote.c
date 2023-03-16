#include <stdio.h>

/**
 * main - prints a string to standard error
 *
 * This function takes a string, and prints it to standard error without making
 * use of any of the functions listed in the NAME section of the man (3) or
 * printf or man (3) puts.
 * Return: 1
*/
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fwrite(str, 1, sizeof(str), stderr);
	fwrite("\n", sizeof(char), stderr);
	return (1);
}

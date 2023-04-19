#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	int i;

	if ((*f) == NULL)
	{
		for (i = 0; name[i] != '\0'; i++)
			_putchar(name[i]);
		_putchar('\n');
	}
	else if (name == NULL)
	{
		exit(0);
	}
	else
	{
		(*f)(name);
	}
}

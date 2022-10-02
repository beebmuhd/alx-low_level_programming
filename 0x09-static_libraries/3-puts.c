#include "main.h"

/**
 *_puts - it`s print a string to the stdout.
 *
 *@str : string value that will be printed.
 *
 *Return: zero(0).
 */

void _puts(char *str)
{
	int string = 0;

	while (string >= 0)
	{
		if (str[string] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[string]);
		string++;
	}
}

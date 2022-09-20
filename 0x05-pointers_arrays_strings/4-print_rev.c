#include "main.h"

/**
 *print_rev - print string in reverse.
 *
 *@s: string value that will be printed in reverse.
 *
 *Return: nothing.
 */

void print_rev(char *s)
{
	int reverse = 0;

	while (reverse >= 0)
	{
		if (s[reverse] == '\0')
			break;
		reverse++;
	}
	for (reverse--; reverse >= 0; reverse--)
		_putchar(s[reverse]);
	_putchar('\n');
}

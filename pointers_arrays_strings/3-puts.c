#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */

void _puts(char *str)
{
	int le;

	for (le = 0; str[le] != '\0'; le++)
{ 
		_putchar(str[le]);
}
	_putchar('\n');
}

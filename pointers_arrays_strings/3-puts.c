#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */

void _puts(char *str)
{
	int le = 0;

	for(str = 0; str[le] != '\0'; le++)
		_putchar(str[le]);

	_putchar('\n');
}




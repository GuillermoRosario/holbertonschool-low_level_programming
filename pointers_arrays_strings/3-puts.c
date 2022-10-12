#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */

void _puts(char *str)
{
	int le;
	int si;

	for(le = 0; str[le] != '\0'; le++)
	
	for(si = 0; str[si] == le; si++)
		_putchar(str[si]);

	_putchar('\n');
}

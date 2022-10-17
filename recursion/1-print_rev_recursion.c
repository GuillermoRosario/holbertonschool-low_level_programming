#include "main.h"
/*
 * Write a function that prints
 * a string in reverse
 * _print_rev_recursion - Print string in reverse
 * @s - string to be printed.
 */

void _print_rev_recursion(char *s);
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}

#include <stdio.h>
/**
 * print_name - function pointer to print apram
 * @name: parameter to print
 * @f: pointer to function with print logic
 */

void print_name(char *name, void (*f)(char *))

{
	if (f != NULL)
	{
	/*Create other pointers and initialize*/
	void(*p)(char *);
	/* assign the value on old pointer to this one*/
	p = f;
	/*pointer points to function and uses char parameter to print*/
	(p) (name);
	}
}


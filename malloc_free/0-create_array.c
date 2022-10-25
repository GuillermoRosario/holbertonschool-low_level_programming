#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/** Write a function that creates an array
 * of chars, and initializes it with a specific char.
 *
 * Returns Null if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int a;

	if(size == 0)
		return (NULL);
	s = malloc(size * sizeof(*s));
	if (s == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
	{
		s[a] = c;
	}
	return (s);
}

	

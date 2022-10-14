/* File 0-strcat.c
 * Auth - Guillermo Rosario
 * Write a function that concatenates two strings
 */

#include "main.h"

char *_strcat(char *dest, char *src)
{
int index;
int move; 

	for ( index = 0; dest[index] != '\0';) 
	{
		index++;
	}
	for (move = 0; src[move] != '\0'; move++)
	{
		dest[index]=src[move];
		index++;
	}
	return (dest);
}

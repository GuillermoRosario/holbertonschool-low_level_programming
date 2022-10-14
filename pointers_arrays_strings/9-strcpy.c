/*
 * File 9-strcpy.c
 * Auth - Guillermo Rosario 
 *
 */


/*
 * Write a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed by dest. 
 *
 * Return the value: The pointer to dest
 */

#include "main.h"

char *_strcpy(char *dest, char *src)

{
	int G;

	for (G = 0; src[G] != '\0'; G++)
	{
		dest[G] = src[G];
	}
	dest[G] = '\0';
	return (dest);
}

/*
 * File 2-strlen.c
 * Auth - Guillermo Rosario
 */

#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 *
 * Return: Always 0 The length of @str.
 */

int _strlen(const char *s)

	{
	
		
	size_t length = 0;

	while (*s++)
		length++;

	return (length);
	}

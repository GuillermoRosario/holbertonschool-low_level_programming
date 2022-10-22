#include "stdio.h"
/**
 * main - print all arguments
 * @argc: number of arguments
 * @argv: arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

#include <stdio.h>

int main (int __attribute__((unused)) argc, char *argv[])
{
	int i;
	
	for ( i=0 ; *argv[i] < argc ; i++ )

	printf("%s\n", argv[i]);

	return (0);
}
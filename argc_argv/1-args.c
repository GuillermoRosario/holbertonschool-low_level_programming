#include <stdio.h>

int main (int __attribute__((unused)) argc, char *argv[])
{
	int i;
	for(i=0;i<argc;i++)
{
	printf("%d",*argv[i]);
}
	return 0;
}

#include <stdio.h>

int main (int __attribute__((unused)) argc, cchar *argv[])
{
	int i;
	for(i=0;i<argc;i++)
{
	printf("%s",*argv[i]);
}
	return 0;
}

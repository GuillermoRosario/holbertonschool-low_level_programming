#include <stdio.h>
#include "dog.h"

int main (void)
{
	struct my_dog;

	char * my_dog.name = "Napoleon";
	float my_dog.age = 3.5;
	char * my_dog.owner = "Guillermo";
	printf("My name is %s, and I am %1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}


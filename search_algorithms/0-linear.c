#include "search_algos.h"

/**
 * linear_search - Function searches for a value in an array of intergers
 * usign the Linear search algotithm
 *
 * @array: is a pointer to the first element of the array
 * @size: is the number if elements in array
 * @value: is the value to search for
 *
 * Return: if value is not present in array or if array is NULL, your function
 * must return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
{
	printf("Value checked array[%1ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		return (i);
}
	return (-1);
}

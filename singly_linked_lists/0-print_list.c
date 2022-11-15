#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to The start of the linked list.
 *
 * Return: The number of nodes in h.
 */

size_t print_list(const list_t *h)

{
	int count = 0;

	while (h != NULL)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n", h->str);
		}
		h = h->next;
		count += 1;
	}

	return (count);
}

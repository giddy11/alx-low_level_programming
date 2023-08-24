#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: head of linked list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counts;

	counts = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nul)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		counts++;
	}

	return (counts);
}

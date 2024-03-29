#include "lists.h"

/**
 * print_listint - Function that prints all elements of a list
 * @h: head of the list
 *
 * Return: the number of nodes of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		count++;
	}

	return (count);
}

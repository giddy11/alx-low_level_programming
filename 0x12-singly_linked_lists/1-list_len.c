#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked `list_t` list
 * @h: head of linked list
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	for (; h != NULL; h = h->next)
	{
		count++;
	}

	return (count);
}

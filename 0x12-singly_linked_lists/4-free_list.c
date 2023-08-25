#include "lists.h"

/**
 * free_list - a function that free a `list_t` list
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	list_t *ptr, *temp;

	ptr = head;

	for (; ptr != NULL; ptr = ptr->next)
	{
		temp = ptr;
		free(temp->str);
		free(temp);
	}
}

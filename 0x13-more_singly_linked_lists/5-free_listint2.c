#include "lists.h"

/**
 * free_listint2 - A function that frees a list
 * @head: A pointer to the head of the list
 *
 * Description: sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *dup;

	dup = *head;

	if (dup == NULL)
		return;

	for (; dup != NULL;)
	{
		temp = (dup)->next;
		free(dup);
		dup = temp;
	}

	*head = (NULL);
}

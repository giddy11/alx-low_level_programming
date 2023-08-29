#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node
 *			at a given position
 * @head: A pointer to a pointer to te head list
 * @idx: Index at which new node is to be inserted
 * @n: The integer that the new node is to contain
 *
 * Return: if success - address of the new node
 *		else - NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *prev, *temp;
	unsigned int count;

	ptr = prev = *head;
	count = 0;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (idx == 0)
	{
		temp->next = ptr;
		*head = temp;
		return (temp);
	}

	for (; ptr != NULL; ptr = ptr->next)
	{
		if (count == idx)
		{
			temp->next = ptr->next;
			prev->next = temp;
			return (*head);
		}
		prev = ptr;

		count++;
	}
	if (idx == count)
	{
		temp->next = ptr;
		prev->next = temp;
		return (*head);
	}

	return (NULL);
}

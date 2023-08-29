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
	listint_t *ptr1, *ptr2, *temp;
	unsigned int count;

	ptr1 = ptr2 = *head;
	count = 0;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (idx == 0)
	{
		temp->next = ptr1;
		*head = temp;
		return (temp);
	}

	for (; ptr1 != NULL; ptr1 = ptr1->next)
	{
		if (count > 1)
			ptr2 = ptr2->next;

		if (count == idx)
		{
			temp->next = ptr1;
			ptr2->next = temp;
			return (*head);
		}

		count++;
	}

	return (NULL);
}

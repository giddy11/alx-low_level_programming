#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at the beginning of a list
 * @head: pointer to a pointer to the head of the list
 * @n: The number to be stored in the node to be added
 *
 * Return: if success, address of te new element
 *		else NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}

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
		return (add_nodeint(head, n));
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
	if (ptr == NULL && idx == count)
	{
		return (add_nodeint_end(head, n));
	}

	return (NULL);
}

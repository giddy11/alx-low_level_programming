#include "lists.h"

/**
 * get_nodeint_at_index - Function that locates a given node of
 *                        a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to locate - indices start at 0.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *mover;

	count = 0;
	mover = head;

	for (; mover != NULL; mover = mover->next)
	{
		if (count == index)
			return (mover);

		count++;
	}

	return (NULL);
}

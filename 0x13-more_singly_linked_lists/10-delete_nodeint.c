#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node
 *		at a specified index in a list
 * @head: A pointer to the ead of the list
 * @index: The index at which the node is to be removed
 *
 * Return: if success - 1
 *		else - -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *ptr = *head;
	unsigned int node;

	if (ptr == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (ptr->next == NULL)
			return (-1);

		ptr = ptr->next;
	}

	temp = ptr->next;
	ptr->next = temp->next;
	free(temp);
	return (1);
}

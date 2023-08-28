#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node at the end of a list
 * @head: A pointer to the address of the head of the list
 * @n: The integer that the node to be added is to contain
 *
 * Return: if success, the addrerss of the new element
 *		else, NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		ptr = *head;
		for (; ptr->next != NULL; ptr = ptr->next)
			;
	}
	ptr->next = temp;

	return (*head);
}

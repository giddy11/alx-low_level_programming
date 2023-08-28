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

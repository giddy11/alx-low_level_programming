#include "lists.h"

/**
 * add_node - a function that adds a node to the head of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: pointer to string that adds as node
 *
 * Return: a pointer to new head of list, NULL on failure.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int len;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	len = 0;
	while (str[len])
	{
		len++;
	}
	temp->len = len;


	return (*head);
}

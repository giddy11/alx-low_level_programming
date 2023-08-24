#include "lists.h"

/**
 * add_node_end - a function that adds a node to the end of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: pointer to string that adds as node
 *
 * Return: a pointer to new head of list, NULL on failure.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;
	int len;

	ptr = *head;

	temp =  malloc(sizeof(list_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->str = strdup(str);
	len = 0;
	while (str[len])
	{
		len++;
	}
	temp->len = len;
	temp->next = NULL;

	ptr->next = temp;

	return (temp);
}

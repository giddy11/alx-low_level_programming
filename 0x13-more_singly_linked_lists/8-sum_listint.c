#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data (n)
 *		of a linked list
 * @head: A pointer to the head of the list
 * Return: if list is empty - 0
 *		else - sum
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *mover;

	sum = 0;
	mover = head;

	for (; mover != NULL; mover = mover->next)
	{
		sum += mover->n;
	}

	return (sum);
}

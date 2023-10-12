#include "lists.h"
/**
 * sum_dlistint - adds the data of a linked list
 * @head: head node
 * Return: 0 or sum of data
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

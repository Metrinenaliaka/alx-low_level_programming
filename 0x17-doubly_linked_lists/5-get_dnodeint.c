#include "lists.h"
/**
 * get_dnodeint_at_index - gets a node at index
 * @head: head node
 * @index: index of node
 * Return: Null or nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	ptr = head;
	while (i < index)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}

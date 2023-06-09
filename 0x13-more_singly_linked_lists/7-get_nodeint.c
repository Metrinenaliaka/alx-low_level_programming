#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of
 * a listint_t linked list.
 * @head: head node
 * @index: index of the node, starting at 0
 * Return: pointer or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *p;

	if (head == NULL)
	{
		return (NULL);
	}
	p = head;
	while (i < index)
	{
		if (p == NULL)
		{
			return (NULL);
		}
		p = p->next;
		i++;
	}
	return (p);
}

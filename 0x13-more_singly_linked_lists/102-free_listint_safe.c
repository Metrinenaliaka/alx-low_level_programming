#include "lists.h"
/**
 * free_listint_safe -  frees a listint_t list.
 * @h: head node
 * Return: size of free'dlist
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *p, *ptr;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	p = *h;
	while (p != NULL)
	{
		ptr = p->next;
		free(p);
		p = ptr;
		count++;
	}
	*h = NULL;
	return (count);
}

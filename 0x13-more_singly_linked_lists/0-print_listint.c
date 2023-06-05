#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t  count = 0;
	const listint_t *p;

	if (h == NULL)
	{
		return (0);
	}
	p = NULL;
	p = h;
	do {
		printf("%d\n", p->n);
		count++;
		p = p->next;
	} while (p != NULL);
	return (count);
}

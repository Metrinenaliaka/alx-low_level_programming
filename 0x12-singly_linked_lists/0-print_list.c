#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: header node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *p;

	p = NULL;
	p = h;
	if (p == NULL)
	{
		return (0);
	}
	while (p != NULL)
	{
		if (p->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", p->len, p->str);
		}
		count++;
		p = p->next;

	}
	return (count);
}

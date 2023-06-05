#include "lists.h"
/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head: head node
 * Return: number nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *p;

	if (head == NULL)
	{
		exit(98);
	}
	p = head;
	while (p != NULL)
	{
		printf("[%p] %d\n", (void *)p, p->n);
		count++;
		if (p <= p->next)
		{
			printf("-> [%p] %d\n", (void *)p->next, p->next->n);
			exit(98);
		}
		p = p->next;
	}
	return (count);
}

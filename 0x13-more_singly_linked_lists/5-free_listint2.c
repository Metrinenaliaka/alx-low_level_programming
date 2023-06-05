#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: head node
 */
void free_listint2(listint_t **head)
{
	listint_t *p, *ptr;

	if (head == NULL)
		return;
	p = *head;
	while (p != NULL)
	{
		ptr = p->next;
		free(p);
		p = ptr;
	}
	*head = NULL;
}

#include "lists.h"
/**
 * reverse_listint - listint_t *reverse_listint(listint_t **head)
 * @head: head node
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *ptr = NULL;

	if (head == NULL)
	{
		return (NULL);
	}
	do {
		p =(*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = p;
	} while (*head != NULL);
	*head = ptr;
	return (*head);
}

#include "lists.h"
/**
 * reverse_listint - listint_t *reverse_listint(listint_t **head)
 * @head: head node
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *ptr = NULL;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	while (*head != NULL)
	{
		p =(*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = p;
	}
	*head = ptr;
	return (*head);
}

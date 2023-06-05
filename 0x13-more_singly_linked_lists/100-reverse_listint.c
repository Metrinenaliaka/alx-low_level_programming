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
	for (; *head != NULL; *head = p)
	{
		p =(*head)->next;
		(*head)->next = ptr;
		ptr = *head;
	}
	*head = ptr;
	return (*head);
}

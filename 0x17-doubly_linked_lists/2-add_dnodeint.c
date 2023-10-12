#include "lists.h"
/**
 * add_dnodeint - adds node at the begining
 * @head: header to a node
 * @n: data to be added
 * Return: NULL or pointer to node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	if ((*head) != NULL)
	{
		temp->next = *head;
		(*head)->prev = temp;
	}
	*head = temp;
	return (temp);
}

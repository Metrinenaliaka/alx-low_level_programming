#include "lists.h"
/**
 * add_dnodeint_end - add nodes at the end
 * @head: head node
 * @n: data to be inserted
 * Return: adress of new elemnt or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *ptr;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	if ((*head) == NULL)
		*head = temp;
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	temp->prev = ptr;
	return (*head);

}

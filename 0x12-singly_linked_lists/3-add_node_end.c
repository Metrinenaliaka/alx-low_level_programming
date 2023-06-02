#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head node
 * @str: string
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p, *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		temp = *head;
		while (p->next != NULL)
		{
			p = p->next;
		}
	}
	p->next = temp;
	return (temp);
}

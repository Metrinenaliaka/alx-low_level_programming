#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t
 * @head: head node
 * @str: data for new node
 * Return: adress of new ele
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p = malloc(sizeof(list_t));

	if (p == NULL)
	{
		return (NULL);
	}
	p->str = strdup(str);
	p->len = strlen(str);
	p->next = *head;
	*head = p;
	return (p);
}

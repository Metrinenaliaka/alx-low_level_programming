#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head node
 * @idx: index position
 * @n: data
 * Return: pointer or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p, *ptr;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		ptr = malloc(sizeof(listint_t));
		if (ptr == NULL)
			return (NULL);
		ptr->n = n;
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	else
	{
		ptr = malloc(sizeof(listint_t));
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr->n = n;
		ptr->next = NULL;
		p = *head;
		idx--;
		for (; idx != 0; p = p->next)
		{
			idx--;
		}
		ptr->next = p->next;
		p->next = ptr;
	}
	return (ptr);
}

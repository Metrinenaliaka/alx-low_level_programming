#include "lists.h"
/**
*delete_nodeint_at_index - deletes a node
*@head: head node
*@index: index to be deleted
*Return: 1 or -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *previous = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	else
	{
		while (index != 0)
		{
			previous = current;
			current = current->next;
			index--;
		}
		previous->next = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	return (1);

}

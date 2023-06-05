#include "lists.h"
/**
 * pop_listint -  function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: header node
 * Return: returns n
 */
int pop_listint(listint_t **head)
{
	int temp;
	listint_t *p;

	temp = (*head)->n;
	if (head == NULL)
	{
		return (0);
	}
	else
	{
		p = *head;
		*head = (*head)->next;
		free(temp);
	}
	return (temp);
}

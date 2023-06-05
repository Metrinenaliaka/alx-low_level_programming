#include "lists.h"
/**
 * sum_listint -  function that returns the sum of all the 
 * data (n) of a listint_t linked list.
 * @head: head node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *p;

	p = head;
	do {
		sum = sum + p->n;
		p = p->next;
	} while (p != NULL);
	return (sum);
}

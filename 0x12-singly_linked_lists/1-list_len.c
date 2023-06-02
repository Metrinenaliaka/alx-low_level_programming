#include "lists.h"
/**
 * list_len - function that returns the number of elements
 * in a linked list_t list.
 * @h: header node
 * Return: number of elemnts
 */
size_t list_len(const list_t *h)
{
	size_t cnt = 0;
	const list_t *ptr;

	ptr = h;
	if (ptr == NULL)
	{
		return (0);
	}
	do {
		cnt++;
		ptr = ptr->next;
	} while (ptr != NULL);
	return (cnt);
}

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

        p = (list_t *) malloc(sizeof(list_t));
        if (p == NULL)
                return (NULL);
        p->str = strdup(str);
        if (!p->str)
        {
                return (NULL);
        }
        p->len = strlen(str);
        p->next = NULL;
        if (*head == NULL)
        {
                *head = p;
        }
        else
        {
                temp = *head;
		do {
			temp = temp->next;
		} while (temp->next != NULL);
                temp->next = p;
        }
        return (p);
}

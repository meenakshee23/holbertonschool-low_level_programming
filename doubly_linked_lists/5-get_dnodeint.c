#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer of the head of the list
 * @index: the index of the node, starting from 0
 *
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}

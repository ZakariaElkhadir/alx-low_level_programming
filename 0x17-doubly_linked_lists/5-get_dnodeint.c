#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int i = 0;

	while (head && i < index)
{
		head = head->next;
		i++;
}
	return (head ? head : NULL);
}

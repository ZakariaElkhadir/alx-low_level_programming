#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 * Return: pointer to the new node, or NULL if it fails
 */
size_t listint_len(const listint_t *h)
{
	size_t jv = 0;

	while (h)
	{
		h = h->next;
		jv++;
	}
	return (jv);
}


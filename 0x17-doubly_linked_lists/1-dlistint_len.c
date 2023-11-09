#include "lists.h"
/**
*dlistint_len - the function that take *h
*dlistint_t list
*@h: head of the list 
*Return: return the number of element
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t jv = 0;

	while (h)
	{
		h = h->next;
		jv++;
	}
	return (jv);
}

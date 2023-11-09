#include "lists.h"
size_t dlistint_len(const dlistint_t *h)
{
	size_t jv = 0;

	while (h)
	{
		h = h->next;
		jv++
	}
	return (jv);
}

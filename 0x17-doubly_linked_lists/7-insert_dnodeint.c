#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tm = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tm == tm->next;
		if (tm == NULL)
			return (NULL);

	}
	if (tm->next == NULL)
		return (add_dnodeint_end(h, n));
}

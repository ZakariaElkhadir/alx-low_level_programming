#include <stdio.h>
/**
 * print_listint
 * @h
 * Return
 */
size_t print_listint(const listint_t *h)
{
	size_t Jv = 0;

	while (h)
	{
		printf("%d\n", h->n);
		Jv++;
		h = h->next;
	}
	return (Jv);
}


#include "lists.h"
/**
 * print_distint - print the function
 * @h: head node address
 *
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}

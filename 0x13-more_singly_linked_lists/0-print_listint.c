#include "lists.h"

/**
 * print_listint - prints elements of list.
 * @h: head list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes_elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes_elements++;
	}
	return (nodes_elements);
}

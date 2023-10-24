#include "lists.h"

/**
 * listint_len - func to calculate number of element.
 * @h: head of a list.
 *
 * Return: count of nodes_element.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes_elements++;
	}
	return (nodes_elements);
}

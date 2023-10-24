#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head of a list.
 *
 * Return: head data.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *h;
	listint_t *t;

	if (*head == NULL)
		return (0);

	t = *head;

	n = t->n;

	h = t->next;

	free(t);

	*head = h;

	return (n);
}

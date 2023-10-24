#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node using for loop
 * @head: head of a list.
 * @index: node index.
 *
 * Return: node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}

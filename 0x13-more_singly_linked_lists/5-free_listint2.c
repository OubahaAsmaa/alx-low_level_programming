#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: head of a list.
 *
 * Return: is Void func.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *tracker;

	if (head != NULL)
	{
		tracker = *head;
		while ((tmp = tracker) != NULL)
		{
			tracker = tracker->next;
			free(tmp);
		}
		*head = NULL;
	}
}

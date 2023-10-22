#include "lists.h"

/**
 * free_list - print list
 * @head : argument
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
		current = head;
	}
}

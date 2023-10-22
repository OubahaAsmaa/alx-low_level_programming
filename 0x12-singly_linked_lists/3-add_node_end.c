#include "lists.h"

/**
 * add_node_end - print list
 * @head : argument
 * @str : argument
 * Return: Always 0.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	size_t n = 0;
	list_t *current = *head;

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[n])
		n++;

	new_node->str = strdup(str);
	new_node->len = n;
	new_node->next = NULL;
	if (current == NULL)
		*head = new_node;
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}

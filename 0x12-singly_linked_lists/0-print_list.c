#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: linked list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nbr_nodes = sizeof(h);
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str != NULL && current != NULL)
		{
			printf("[%d] %s\n", current->len,
			current->str != NULL ? current->str : "(nil)");
			current = current->next;
			nbr_nodes++;
		} else
		{
			printf("[%d] %s\n", 0,
			current->str != NULL ? current->str : "(nil)");
			current = current->next;
			nbr_nodes++;
		}
	}

	return (nbr_nodes);
}

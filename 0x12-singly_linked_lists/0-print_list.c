#include "main.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: linked list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nbr_nodes = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str != NULL)
		{
			printf("[%d] %s\n", current->len,
			current->str);
			current = current->next;
			nbr_nodes++;
		} else
		{
			printf("[0] %s\n",
			"(nil)");
			current = current->next;
			nbr_nodes++;
		}
	}

	return (nbr_nodes);
}

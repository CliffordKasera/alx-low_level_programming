#include "main.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @*h: list_h
 * Returns: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nbr_nodes = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		printf("[%d] %s\n", current->len,
		current->str != NULL ? current->str : "(nil)");
		current = current->next;
		nbr_nodes++;
	}
	return (nbr_nodes);	
}

#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list
 * @h: pointer to the start of the linked list
 *
 * Return: number of elemts
 */

size_t list_len(const list_t *h)
{
	const list_t *tmp;
	int i;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		tmp = tmp->next;
	}
	return (i);
}

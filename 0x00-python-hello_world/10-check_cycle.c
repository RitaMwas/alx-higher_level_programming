#include "lists.h"

/**
 * check_cycle - Check cycle of a linked list
 * @list: linked list
 * Return: 0 if no cycle, 1 if cycle present
 */

int check_cycle(listint_t *list)
{
	listint_t *ahead = list;

	while (list && ahead && ahead->next)
	{
		list = list->next;
		ahead = ahead->next->next;
		if (list == ahead)
			return (1);
	}
	return (0);
}

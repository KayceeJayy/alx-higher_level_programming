#include "lists.h"

/*
 * check_cycle - checks for cycle in singly linked list
 * @list: the list
 * Return: 0 (no cycle) 1 (cycle)
 */

int check_cycle(listint_t *list)
{
	listint_t *fast = list, *slow = list;

	if (list != NULL)
	{
		while (fast && fast->next)
		{
			fast = fast->next->next;
			slow = slow->next;
			if (slow == fast)
			{
				fast = list;
				while (slow != fast)
				{
					slow = slow->next;
					fast = fast->next;
				}
				return (1);
			}
		}
	}
	return (0);
}


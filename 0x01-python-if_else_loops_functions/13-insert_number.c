#include "lists.h"

/**
 * insert_node - inserts a number into a sorted singly linked list.
 * @head: list head
 * @number: number to store in the new node
 * Return: pointer to the new node
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_num;
	listint_t *new;

	runner = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	if (*head == NULL || (*head)->n > number)
	{
		new->next = *head;
		*head = new;
		return(new);
	}

	while(new_num->next != NULL)
	{
		if ((new_num->next)->n >= number)
		{
			new->next = new_num->next;
			new_num->next = new;
			return(new);
		}
		new_num = new_num->next;
	}

	new->next = NULL;
	new_num->next = new;
	return(new);
}

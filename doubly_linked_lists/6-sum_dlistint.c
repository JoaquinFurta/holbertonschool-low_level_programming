#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - returns the nth node of a listint
 *
 * @head: A pointer to the first node of the list
 *
 * Return: addition of all the nodes
 */

int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}

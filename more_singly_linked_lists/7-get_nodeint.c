#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint
 *
 * @head: A pointer to the first node of the list
 * @index: index of the node
 *
 * Return: data of the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int mem = 1;
	listint_t *temp = NULL;

	while (*head != NULL) && (mem =< index)
	{
		
		head = head->next;
		mem++;
	}
	if (head != NULL)
		temp = head;
	return (temp);
}

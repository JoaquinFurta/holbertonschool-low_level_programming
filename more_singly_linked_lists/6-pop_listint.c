#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node, returns head node data
 *
 * @head: A pointer to the first node of the list
 *
 * Return: data of the node
 */

int pop_listint(listint_t **head)
{
	int mem = 0;
	listint_t *temp;

	if ((*head)->n)
		mem = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (mem);
}

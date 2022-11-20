#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - adds a node to the list
 *
 * @head: A pointer to the first node of the list
 * @idx: index where the new node should be added
 * @n: int to be charged to the list
 *
 * Return: addres of the new node or null if Fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int mem = 1;
	listint_t *temp = NULL;

	while ((*head != NULL) && (mem <= idx - 1))
	{
		*head = (*head)->next;
		mem++;
	}


	temp = malloc(sizeof(*head));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	if (idx == 0)
	{
		temp->next = (*head)->next;
		*head = temp;
	}
	else
	{
		temp->next = (*head)->next;
		(*head)->next = temp;
	}

	return (temp);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - prints the list
 * @head: header of the list
 * @n: integer
 * Return: Number of nodes of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *aux, *temp;

	temp = *head;

	aux = malloc(sizeof(listint_t));
	if (aux == NULL)
	{
		free(aux);
		return (NULL);
	}
	aux->n = n;
	aux->next = NULL;

	if (temp == NULL)
		*head = aux;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = aux;
	}

	return (*head);
}

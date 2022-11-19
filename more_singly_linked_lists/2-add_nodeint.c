#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - prints the list
 * @head: header of the list
 * @n: integer
 * Return: Number of nodes of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *aux;

	aux = malloc(sizeof(listint_t));
	if (aux == NULL)
	{
		free(aux);
		return (NULL);
	}

	aux->n = n;
	aux->next = *head;
	*head = aux;
	return (*head);
}

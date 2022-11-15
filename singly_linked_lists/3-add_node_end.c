#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - prints the list
 * @head: header of the list
 * @str: string
 * Return: Number of nodes of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *aux, *temp;
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	aux = malloc(sizeof(list_t));
	if (aux == NULL)
	{
		free(aux);
		return (NULL);
	}

	aux->str = strdup(str);
	aux->len = strlen(str);
	aux->next = NULL;
	temp->next = aux;
	return (aux);
}

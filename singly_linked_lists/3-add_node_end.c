#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include"lists.h"

/**
 *list_t *add_node_end  - function that adds node in end of list
 *@head: pointer to the beginning of the list
 *@str :string
 * Return: node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *cont;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	
	new_node->len = strlen(str);
	new_node->next = NULL;
	
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		cont = *head;

		while (cont->next != NULL)
			cont = cont->next;

		cont->next = new_node;
	}
	return (new_node);
}

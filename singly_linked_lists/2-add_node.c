#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include"lists.h"
/**
 *list_t *add_node  - function that adds node in begining of list
 *@head: pointer to the beginning of the list
 *@str :string
 * Return: node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *list;

	if (str == NULL)
	{
		return (NULL);
	}
	list = malloc(sizeof(list_t));
	if (list == NULL)
	{
		return (NULL);
	}
	list->str = strdup(str);
	list->len = strlen(str);
	list->next = *head;
	
	*head = list;
	return (list);
}

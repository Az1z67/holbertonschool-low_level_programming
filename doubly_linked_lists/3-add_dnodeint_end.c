#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the first element of the list.
 * @n: new node.
 * Return: address, or NULL
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *add = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (add)
	{
		while (add->next)
			add = add->next;
		new->prev = add;
		add->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);
}

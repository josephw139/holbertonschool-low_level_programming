#include "lists.h"
/**
 * add_dnodeint - adds a node the the beginning of a linked list
 * @head: beginning of list
 * @n: data for the list
 * Return: address for new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	*head = new_node;

	return (new_node);
}

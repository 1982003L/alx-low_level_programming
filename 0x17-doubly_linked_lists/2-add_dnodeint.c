#include "lists.h"
/**
 * add_dnodeint - adding new node at the begging
 * @head: new node
 * @n: data of new node
 * Return: (new_node_data)
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node at index.
 * @h: head of linked list.
 * @idx: index of node
 * @n: data of the node.
 * Return: address of new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	current = *h;

	while (count < idx - 1)
	{
		if (current ==  NULL)
		{
			free(new_node);
			return (NULL);
		}
		current = current->next;
		count++;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;

	return (new_node);
}

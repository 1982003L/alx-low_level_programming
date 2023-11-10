#include "lists.h"
/**
 * get_dnodeint_at_index - function return a spicific node
 *
 * @head: head node
 * @index: position of the node
 * Return: as need
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}

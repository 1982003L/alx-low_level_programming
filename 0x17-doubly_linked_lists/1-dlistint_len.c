#include "lists.h"
/**
 * dlistint_len - function count num of nodes
 * @h: head node
 * Return: as need
 *
*/
size_t dlistint_len(const dlistint_t *h)
{
int count = 0;
const dlistint_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}

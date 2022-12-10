#include "lists.h"
/**
 * get_dnodeint_at_index - Return the nth node
 * @head: Pointer to the head
 * @index: The node index
 * Return: The direction of the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (counter < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		counter++;
	}
	return (head);
}

#include "lists.h"

/**
 * dlistint_len - print the length of a linked list
 * @h: head of the linked list
 * Return: length of linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t len = 0;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}

#include "lists.h"

/**
 * add_dnodeint - add a node to the beginning of the list
 * @head: head node
 * @n: data in the new node
 * Return: the pointer to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	temp = *head;
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = temp;
	if (temp != NULL)
		temp->prev = newnode;
	*head = newnode;
	return (*head);
}

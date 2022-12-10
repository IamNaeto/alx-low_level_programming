#include "lists.h"
/**
 * sum_dlistint - Sum of the data (n)
 * @head: Pointer to the head
 * Return: The result of the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int add_result = 0;

	while (head != NULL)
	{
		add_result += head->n;
		head = head->next;
	}
	return (add_result);
}

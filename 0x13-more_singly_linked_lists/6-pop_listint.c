#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: A pointer to the first node of the listint_t list.
 *
 * Return: The data of the deleted node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	return (n);
}


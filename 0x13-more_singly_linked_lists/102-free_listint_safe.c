#include "lists.h"
/**
 * free_listint_safe - Frees a linked list safely
 * @head: Pointer to the first node in the linked list
 *
 * Return: The number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num_elements_freed = 0;
	int pointer_difference;
	listint_t *temp_node;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		pointer_difference = *h - (*h)->next;
		if (pointer_difference > 0)
		{
			temp_node = (*h)->next;
			free(*h);
			*h = temp_node;
			num_elements_freed++;
		}
		else
		{
			free(*h);
			*h = NULL;
			num_elements_freed++;
			break;
		}
	}

	*h = NULL;

	return (num_elements_freed);
}


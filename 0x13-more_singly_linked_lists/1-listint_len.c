#include "lists.h"

/**
* listint_len - a function that returns the number of elements
* listint_t list is the name of the linked list
* @h: a pointer to a listint_t list
* Return: returns the number of elements in the list
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

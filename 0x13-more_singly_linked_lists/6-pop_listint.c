#include "lists.h"

/**
* pop_listint - a function that deletes the head node of a listint_t
* linked list, and returns the head node’s data (n)
* @head: a pointer to the head of the list
* Return: the data (n) of the deleted head node or 0 if the list is empty
*/

int pop_listint(listint_t **head)


{
	int n;

	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (n);
}

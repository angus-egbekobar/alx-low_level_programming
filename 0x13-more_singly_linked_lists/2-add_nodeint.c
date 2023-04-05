#include "lists.h"

/**
* add_nodeint - a function that adds a new node at the beginning
* of a listint_t list
* @head: the head of the listint_t list
* @n: the data to be added in the new node
* Return: returns the address of the new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		*head = new_node;

		return (new_node);
	}

	 new_node->next = *head;
	new_node->n = n;
	*head = new_node;

	return (new_node);
}

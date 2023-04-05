#include "lists.h"

/**
* add_nodeint_end - a function that adds a new node at the end
* of a listint_t list
* @head: the head of the listint_t list
* @n: the data to be added to the new node
* Return: returns the address of the new element, or NULL if failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	current = *head;

	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->n = n;
		*head = new_node;

		return (new_node);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}

	new_node->next = NULL;
	new_node->n = n;
	current->next = new_node;

	return (new_node);
}

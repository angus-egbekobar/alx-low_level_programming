#include "lists.h"

/**
* free_listint - a function that frees a listint_t list
* @head: the head of the listint_t list
* Return: returns nothing
*/
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}

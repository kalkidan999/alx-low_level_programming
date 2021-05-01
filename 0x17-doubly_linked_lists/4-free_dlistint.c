#include "lists.h"
/**
 * free_dlistint - free a list
 * @head:list
 * Return:void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *src, *check;

	src = head;
	while (src != NULL)
	{
		check = src->next;
		free(src);
		src = check;
	}
}

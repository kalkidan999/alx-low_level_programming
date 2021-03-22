#include "lists.h"
/**
* insert_nodeint_at_index - insert node at nth index
* @head: pointer
* @idx: nth index
* @n: value
*Return: pointer
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
	listint_t *temp = *head;
	while (temp && i < idx)
	{
		temp = temp->next;
		i++;
	}
temp->n = n;
temp->next = *head
*head = temp;
return (temp);
}

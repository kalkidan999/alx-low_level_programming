#include "lists.h"
/**
* delete_nodeint_at_index - insert node at nth index
* @head: pointer
* @index: nth index
*Return: pointer
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *newnode;
newnode = malloc(sizeof(listint_t));
if (index == 0)
newnode->next = *head;
(*head)->next = newnode->next;
free(newnode);
return (*head);
}

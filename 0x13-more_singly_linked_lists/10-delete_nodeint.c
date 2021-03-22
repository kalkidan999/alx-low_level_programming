#include "lists.h"
/**
* delete_nodeint_at_index - insert node at nth index
* @head: pointer
* @index: nth index
*Return: pointer
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *newnode;
newnode = malloc(sizeof(listint_t));
newnode->n = n;
newnode->next = NULL;
}
if (index == 0)
{
newnode->next = *head;
*head = newnode;
free(*head);
return (*head);
}
}

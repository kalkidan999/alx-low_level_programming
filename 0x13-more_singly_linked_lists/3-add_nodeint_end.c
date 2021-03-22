#include "lists.h"
/**
* add_nodeint_end - prints list
* @head: pointer
* @n: integer
*Return: pointer
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode = *head;
while (newnode->next != NULL)
{
newnode = newnode->next;
}
if (!newnode)
{
return (NULL);
}
newnode->next = malloc(sizeof(listint_t));
newnode->next->n = n;
newnode->next->next = NULL;
return (newnode);
}

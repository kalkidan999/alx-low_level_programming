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
newnode = malloc(sizeof(listint_t));
newnode->n = n;
newnode->next = NULL;
if (*head != NULL)
{
return (*head);
}
while (*head)
{
newnode->next = malloc(sizeof(listint_t));
newnode->next->n = n;
newnode->next->next = NULL;
*head = newnode;
return (*head);
}
}

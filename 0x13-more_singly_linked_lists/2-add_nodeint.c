#include "lists.h"
/**
* list_len - prints list
* @h: pointer
*Return: pointer
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
n = 0;
listint_t *newnode; 
newnode = malloc(sizeof(listint_t));
if (!newnode)
{
return (NULL);
}
newnode->val = n;
newnode->next = *head;
*head = n;
return (*head);
}

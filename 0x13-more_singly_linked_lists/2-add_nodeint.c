#include "lists.h"
/**
* add_nodeint - prints list
* @head: pointer
* @n: node
*Return: pointer
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;
newnode = malloc(sizeof(listint_t));
if (!newnode)
{
return (NULL);
}
newnode->n = n;
newnode->next = (*head);
*head = newnode;
return (*head);
}

#include "lists.h"
/**
* add_nodeint_end - prints list
* @head: pointer
* @n: integer
*Return: pointer
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode;
listint_t *temp = *head;
newnode = malloc(sizeof(listint_t));
newnode->n = n;
newnode->next = NULL;
if (*head == NULL)
{
*head = newnode;
return (newnode);
}
while (temp->next != NULL)
temp = temp->next;
temp->next = newnode;
return (newnode);
}

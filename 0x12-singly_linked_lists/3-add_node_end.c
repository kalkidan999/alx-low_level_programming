#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
* add_node_end - prints list
* @head: pointer
* @str: string pointer
* Return: pointer
*/
list_t *add_node_end(list_t **head, const char *str)
{
unsigned int len = 0;
list_t *newnode;
list_t *temp = *head;
while (str[len])
len++;
newnode = malloc(sizeof(list_t));
if (!newnode)
{
return (NULL);
}
newnode->str = strdup(str);
newnode->len = len;
newnode->next = NULL;
if (*head == NULL)
{
*head = newnode;
return (newnode);
}
while (temp->next != NULL)
{
temp = temp->next;
temp->next = newnode;
return (newnode);
}
}

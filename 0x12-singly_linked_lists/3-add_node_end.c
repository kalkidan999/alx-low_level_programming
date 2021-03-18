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
while (str[len])
len++;
if (head == NULL)
{
newnode = malloc(sizeof(list_t));
if (!newnode)
{
return (NULL);
}
newnode->str = strdup(str);
newnode->len = len;
newnode->next = (*head);
(*head) = newnode;
return (*head);
}else
{
newnode->next = malloc(sizeof(list_t));
if (!newnode)
{
return (NULL);
}
newnode->str = strdup(str);
newnode->len = len;
newnode->next->next = (*head);
(*head) = newnode;
newnode->next->next = NULL;
return (*head);
}
}

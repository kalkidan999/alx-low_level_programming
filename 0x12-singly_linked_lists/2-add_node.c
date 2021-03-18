#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
* add_node - prints list
* @head: pointer
* @str: string pointer
* Return: pointer
*/
list_t *add_node(list_t **head, const char *str)
{
unsigned int len = 0;
list_t *newnode;
while (str[len])
len++;
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
}

#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
* list_len - prints list
* @h: pointer
*Return: pointer
*/
list_t *add_node(list_t **head, const char *str)
{
unsigned int len = 0;
list_t *newnode;
while(str[len])
len++;
newnode = malloc(sizeof(list_t));
newnode->str = strdup(str);
newnode->len = len;
newnode->next = (*head);
(*head) = newnode;
return (*head);
}

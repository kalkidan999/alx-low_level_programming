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
list_t *new;
while(str[len])
len++;
new = malloc(sizeof(list_t));
if (!new)
{
return (NULL);
}
new->str = strdup(str);
new->len = len;
new->next = (*head);
(*head) = new;
return (*head);
}

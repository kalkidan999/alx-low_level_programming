#include "lists.h"
/**
* print_list - prints list
* @size: int
* @c: array of strings
*Return: pointer
*/
size_t print_list(const list_t *h)
{
struct list_t {
int data;
list_t *next;
};
h first = NULL;
first = malloc(sizeof(list_t));
first->next = NULL;
first->data = list_t;
h temp = malloc(sizeof(list_t);
temp->next = first;
first = temp;
printf("%s", first->data);
return (0);
}

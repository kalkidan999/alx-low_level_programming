#include "holberton.h"
/**
* create_array - multiplies two numbers
* @size: int
* @c: array of strings
*Return: pointer
*/
size_t print_list(const list_t *h)
{
struct node {
int data;
h next;
};
typedef struct node node;
h first = NULL;
first = malloc(sizeof(node));
first->next = NULL;
first->data = list_t;
h temp = malloc(sizeof(node);
temp->next = first;
first = temp;
printf("%s", first->data);
return (0);
}

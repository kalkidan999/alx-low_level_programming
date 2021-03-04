#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _realloc - multiplies two numbers
* @ptr: pointer
* @old_size: old size
* @new_size: new size
*Return: pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
int *new;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
new = malloc(new_size);
if (new == NULL)
return (NULL);
return (new);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
new = malloc(new_size);
if (new == NULL)
return (NULL);
for (i = 0; i < old_size && i < new_size; i++)
new[i] = ((char *)ptr)[i];
free(ptr);
return (new);
}

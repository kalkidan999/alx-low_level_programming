#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints a name as is
 * @array: name of the person
 * @size: void
 * @action: void
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array && size && action)
{
for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
}

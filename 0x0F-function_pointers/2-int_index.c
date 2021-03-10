#include "function_pointers.h"
/**
 * int_index - executes funct
 * @array: array of elements
 * @size: array's size
 * @cmp: pointer to function
 * Return: No
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}
if (size <= 0)
{
return (-1);
}
return (-1);
}

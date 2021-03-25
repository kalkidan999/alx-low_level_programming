#include "holberton.h"
#include <stdlib.h>
/**
 * clear_bit - sets index to 0
 * @n: containing the decimal number
 * @index: containing the index
 * Return: the converted number
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(n) * 8)
return (-1);
*n &= ~(1 << index);
return (1);
}

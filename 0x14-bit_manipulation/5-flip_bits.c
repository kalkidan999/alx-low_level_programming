#include "holberton.h"
#include <stdlib.h>
/**
 * countSetBits - counter
 * @n: containing the number
 * Return: the converted number
 */
int countSetBits(unsigned long int n)
{
unsigned long int count = 0;
while (n > 0)
{
count++;
n &= (n - 1);
}
if (count > sizeof(n) * 8)
return (-1);
return (count);
}
/**
 * flip_bits - flips index to x0r
 * @n: containing the number
 * @m: containing the number
 * Return: the converted number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
return (countSetBits(n ^ m));
}

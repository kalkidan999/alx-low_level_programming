#include "holberton.h"
#include <stdlib.h>
/**
 * flip_bits - flips index to x0r
 * @n: containing the number
 * @m: containing the number
 * Return: the converted number
 */
int countSetBits(int n)
{

    int count = 0;

    while (n > 0)

    {

        count++;

        n &= (n-1);

    }

    return count;
}
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
return countSetBits(n ^ m);
}

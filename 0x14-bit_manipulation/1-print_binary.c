#include "holberton.h"
/**
 * print_binary - converts int to binary number
 * @n: containing the decimal number
 * Return: the converted number
 */
void print_binary(unsigned long int n)
{
int i, count = 0;
unsigned long int pnt;
for (i = 63; i >= 0; i--)
{
pnt = n >> i;
if (pnt & 1)
{
_putchar('1');
count++;
}
else if (pnt)
_putchar('0');
}
if (!pnt)
_putchar('0');
}

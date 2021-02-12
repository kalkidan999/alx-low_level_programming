#include "holberton.h"
/**
 * print_number - check the code for Holberton School students
 * 
 * @n: input
 * Return: success
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10 != 0)
{
print_number(n / 10);
}
_putchar(n % 10 + '0');
}

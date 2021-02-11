#include "holberton.h"
/**
* print_diagonal - check the code for Holberton School students.
* @n: integer
* Return: Always 0.
*/
void print_diagonal(int n)
{
int i;
for(i = 1; i < n; i++)
{
for(n = 1; n < i; n++)
{
if(n < 0)
{
_putchar('\n');
}
else
{
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
}
return;
}

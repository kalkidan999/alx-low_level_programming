#include "holberton.h"
/**
* print_diagonal - check the code for Holberton School students.
* @n: integer
* Return: Always 0.
*/
void print_diagonal(int n)
{
int i = 0;
int j;
j = n;
if(j < 0)
_putchar('\n');
for (n = 0; n > 0; n++)
{
for(i = n; i < n; i++)
{
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
return;
}        

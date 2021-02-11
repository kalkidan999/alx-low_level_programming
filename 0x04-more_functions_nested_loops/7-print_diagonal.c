#include "holberton.h"
/**
* print_diagonal - check the code for Holberton School students.
* @n: integer
* Return: Always 0.
*/
void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for(j=1;j<=n;j++)
{
if(i==j)
_putchar('\\');
else if (n < 0)
{
_putchar('\n);
}
}
}
return;
}        

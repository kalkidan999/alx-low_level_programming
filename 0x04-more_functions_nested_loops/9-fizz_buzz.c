#include "holberton.h"
/**
* main -checks
* Return: 1 for digit
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 3) == 0)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
_putchar(' ');
}
else if ((i % 5) == 0)
{
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
_putchar(' ');
}
else if ((i % 15) == 0)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar('0' + i);
}
}
_putchar('\n');
return (0);
}

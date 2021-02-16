#include "holberton.h"
/**
* puts_half -change value using the pointer address
*
*@str: stores the input
*/
void puts_half(char *str)
{
int i, r, c = 0;
while (str[c])
{
c++;
}
r = c % 2;
for (i = c / 2; i < c; i++)
{
if (r == 0)
{
_putchar(str[i]);
}
}
for (i = (c - 1) / 2; i < c; i++)
{
if (r == 1)
{
_putchar(str[i]);
}
}
_putchar('\n');
}

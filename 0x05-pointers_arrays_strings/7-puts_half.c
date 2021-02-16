#include "holberton.h"
/**
* puts_half -change value using the pointer address
*
*@str: stores the input
*/
void puts_half(char *str)
{
int r, c = 0;
while (str[c])
{
c++;
}
r = c % 2;
for (c / 2; c < 0; c++)
{
if (r == 0)
{
_putchar(str[c]);
}
}
for (c - 1 / 2; c < 0; c++)
{
if (r == 1)
{
_putchar(str[c]);
}
}
_putchar('\n');
}

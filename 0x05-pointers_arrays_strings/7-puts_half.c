#include "holberton.h"
/**
* puts_half -change value using the pointer address
*
*@str: stores the input
*/
void puts_half(char *str)
{
int c = 0;
while (str[c])
{
c++;
}
c = (c - 1) / 2;
while (str[++c])
{
_putchar(str[c]);
}
_putchar('\n');
}

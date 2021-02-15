#include "holberton.h"
/**
* puts_half -change value using the pointer address
*
*@str: stores the input
*/
void puts_half(char *str)
{
int i, c = 0;
for (i = 0; *(str + i) != '\0'; i++)
{ 
c++;
}
int n;
n = (c - 1) / 2;
if ((c / 2) == 0)
{
for (i = c / 2 ; i <= c; i ++)
{
_putchar(str[i]);
}
}
else
{
for (i = n; i <= c; i ++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}

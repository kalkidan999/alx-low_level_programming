#include "holberton.h"
/**
* puts_half -change value using the pointer address
*
*@str: stores the input
*/
void puts_half(char *str)
{
int i, c = 0;
int n = (c - 1) / 2;
int m = c / 2;
for (i = 0; *(str + i) != '\0'; i++)
{ 
c++;
} 
if ((c / 2) == 0)
{
for (i = m; i <= c; i ++)
{
_putchar(str[i]);
}
}
else
{
for (i = 0; i <= n; i ++)
{
_putchar(str[i + 5]);
}
}
_putchar('\n');
}

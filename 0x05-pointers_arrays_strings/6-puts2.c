#include "holberton.h"
/**
* puts2 -change value using the pointer address
*
*@str: stores the input
*/
void puts2(char *str)
{
int i, c = 0;
while (str[c])
{
c++;
}
for (i = 0; i <= c; i++)
{
_putchar(str[i + 2]);
}
_putchar('\n');
}

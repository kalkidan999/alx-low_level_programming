#include "holberton.h"
/**
* puts2 -change value using the pointer address
*
*@str: stores the input
*/
void puts2(char *str)
{
int i = 0;
while (str[i])
{
i++;
}
for (i = 0; i >= 0; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}

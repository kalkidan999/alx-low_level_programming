#include "holberton.h"
/**
* puts2 -change value using the pointer address
*
*@str: stores the input
*/
void puts2(char *str)
{
int i;
while (str[i])
{
i++;
}
for (i = 0; i <= 0; i += 2)
{
_putchar(str[i + 2]);
}
_putchar('\n');
}

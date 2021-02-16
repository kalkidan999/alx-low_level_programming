#include "holberton.h"
/**
* print_rev -change value using the pointer address
*
*@s: stores the input
*/
void print_rev(char *s)
{
int i = 0;
while (s[i])
{
i++;
}
while (--i >= 0)
{
_putchar(s[i]);
}
_putchar('\n');
}

#include "holberton.h"
/**
* puts -change value using the pointer address
*
*@str: stores the input
*/
void puts2(char *str)
{
int i, c = 0;
char s[50] = "";
for (i = 0; *(str + i) != '\0'; i++)
{ 
c++;
} 
for (i = 0; i <= c; i += 2)
{
_putchar(str[i]);
s[i/2]=str[i];
}
_putchar('\n');
}

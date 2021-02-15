#include <stdio.h>
#include "holberton.h"
/**
* rev_string -change value using the pointer address
*
*@s: stores the input
*/
void rev_string(char *s)
{
int i, c = 0;
for (i = 0; *(s + i) != '\0'; i++)
{
    c++;
}
    for (i = c - 1; i >= 0; i--)
{
   printf("%c", *(s + i));
}
}

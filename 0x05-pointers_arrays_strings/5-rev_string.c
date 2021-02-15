#include "holberton.h"
/**
* rev_string -change value using the pointer address
*
*@s: stores the input
*/
void rev_string(char *s)
{
char *s1;
 while (*s1)
    {
        *--s = *s1++;
    }

}

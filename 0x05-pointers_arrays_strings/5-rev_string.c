#include "holberton.h"
/**
* rev_string -change value using the pointer address
*
*@s: stores the input
*/
void rev_string(char *s)
{
int length, c;
 char temp;
    length = 10;
     char *begin  = s;
     char *end    = s;
       for (c = 0; c < length; c++) {        
        temp   = *end;
        *end   = *begin;
        *begin = temp;
 
        begin++;
        end--;
    }
}

#include "holberton.h"
#include<string.h>
/**
* rev_string -change value using the pointer address
*
*@s: stores the input
*/
void rev_string(char *s)
{
int length, c;
    char *begin, *end, temp;
    length = strlen(s);
    begin  = s;
    end    = s + length;
 
    
    for (c = 0; c < length / 2; c++) 
    {        
        temp   = *end;
        *end   = *begin;
        *begin = temp;
 
        begin++;
        end--;
    }
}

#include "holberton.h"
/**
* rev_string -change value using the pointer address
*
*@s: stores the input
*/
void rev_string(char *s)
{
int length, c;
    char *begin, *end, temp;
    begin  = s;
    end    = s;
 
    
    for (c = 0; c <= 10; c++) {        
        temp   = *end;
        *end   = *begin;
        *begin = temp;
 
        begin++;
        end--;
    }
}

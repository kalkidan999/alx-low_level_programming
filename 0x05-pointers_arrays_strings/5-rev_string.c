#include "holberton.h"
/**
* rev_string -change value using the pointer address
*
*@s: stores the input
*/
void rev_string(char *s)
{
int i, c = 0;
char *first = s, *last = s, temp;
while (s[c])
c++;

for (i = 0; i < c - 1; i++)
{
last++;
}
for (i = 0; i < c--; i++)
{
temp = *last;
*last = *first;
*first = temp;
first++;
last--;
}
}

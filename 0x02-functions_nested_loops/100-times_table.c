#include <stdio.h>
#include "holberton.h"
/**
* print_times_table - printing
* @n: n
*/
void print_times_table(int n)
{
int i;
if (n < 15)
{
for (i = 0; i <= 15; i++)
{
if (i != 15)
printf("%d, ", i);
else
printf("%d", i);
}
printf("\n");
}
else if (n > 15 || n < 0)
break;
}
else
{
printf("%d", i);
printf("\n");
}

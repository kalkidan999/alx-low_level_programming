#include "holberton.h"
/**
* times_table - prints the 9 times table
*/
void times_table(void)
{
int r;
int col;
int product;
for (r = 0; r <= 9; r++)
{
for (col = 0; col <= 9; col++)
{
product = (r * col);
if (col == 0)
{
_putchar('0' + product);
}
else if (product <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + product);
}
else if (product > 9)
{
_putchar(',');
_putchar(' ');
_putchar('0' + (product / 10));
_putchar('0' + (product % 10));
}
}
_putchar('\n');
}
}

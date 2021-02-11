#include "holberton.h"
/**
* main -checks
* Return: 1 for digit
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 3) == 0)
{
_putchar('Fizz ');
}
else if ((i % 5) == 0)
{
_putchar('Buzz ');
}
else if ((i % 15) == 0)
{
_putchar('Fizz');
_putchar('Buzz ');
}
else
{
_putchar('0' + i);
}
}
_putchar('\n');
return (0);
}

#include <holberton.h>
/**
* positive_or_negative - random numbers
*@i: integer
* Return: 1 if the number is positive. 0 otherwise
*/
void positive_or_negative(int i)
{
int n;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}

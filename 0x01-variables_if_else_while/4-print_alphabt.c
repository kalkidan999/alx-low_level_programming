#include <stdlib.h>
#include <stdio.h>
/**
* main - lowercase and uppercase letters
* Return: success-0
*/
int main(void)
{
char ch, q, e;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch == q || ch == e)
{
putchar(ch, ' ');
putchar('\n');
}
}
return (0);
}

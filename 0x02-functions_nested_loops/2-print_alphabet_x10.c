#include "holberton.h"
/**
 * print_alphabet_x10 - check the code for Holberton School students
 */
void print_alphabet_x10(void)
{
int i = 0;
char ch;
while (i < 10)
{
for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
i++;
_putchar('\n');
}
}

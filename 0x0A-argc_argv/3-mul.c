#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 *@argc: character count
 *@argv: array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;
int count = 1;
if (argc > 0)
{
for (i = 0; i < argc; i++)
{
count *= atoi(argv[i]);
}
  printf("%d\n", count);
}
return (0);
}

#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *@argc: character count
 *@argv: array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;
int a = 0;
int b = 0;
int count = a * b;
if (argc > 0)
{
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[count]);
}
}
return (0);
}

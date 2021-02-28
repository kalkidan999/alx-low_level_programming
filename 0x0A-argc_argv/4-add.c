#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - check the code for Holberton School students.
 *@argc: character count
 *@argv: array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i, sum = 0;
if (argc < 1)
{
printf("0\n");
}
for (i = 1; i < argc; i++)
{
if (isdigit(argv[i])
    {
sum += atoi(argv[i]);
    }
    else 
    {
      printf("Error\n");
return (1);
}
    }  
printf("%d\n", sum);
return (0);
}

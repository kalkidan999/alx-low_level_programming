#include <stdio.h>
#include <stdlib.h>

int is_number(char const* arg)
{
     int n;
   return (sscanf(arg, "%d", &n) == 1);
}
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
sum += atoi(argv[i]);
    }

if (is_number(argv[i]) )
  {
      printf("%d\n", sum);
  }
    else 
    {
      printf("Error\n");
return (1);
}
return (0);
}

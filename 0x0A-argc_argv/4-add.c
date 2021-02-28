#include <stdio.h>
#include <stdlib.h>

int checkString(char *Str)
{
    char *ptr = Str;

    while( *ptr )
    {
                if( ! (*ptr >= 0x30 && *ptr <= 0x39 ) )
        {
            return 0;
        }
        ptr++;
    }

    return 1;
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
int j;
if (argc < 1)
{
printf("0\n");
}
for (i = 1; i < argc; i++)
{
sum += atoi(argv[i]);
    }
for (j = 0; j < argc; ++j)
{
if (checkString(argv[j]) )
  {
      printf("%d\n", sum);
  }
    else 
    {
      printf("Error\n");
return (1);
}
}
return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
     srand((unsigned int)(time(NULL)));
    char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789/,.-+=~`<>:";

    for(index = 0; index < 12; index++)
    {
        printf("%c", characters[rand() % (sizeof characters - 1)]);
    }
return (0);
}

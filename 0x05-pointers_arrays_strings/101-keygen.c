#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
     srand((unsigned int)(time(NULL)));

    int index = 0;

    //step 1
    char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789/,.-+=~`<>:";
    //I just added a few punctuations characters for explanatory purpose
    //you can add all the additional punctuations which are required

    //step 2
    for(index = 0; index < 12; index++)
    {
        printf("%c", characters[rand() % (sizeof characters - 1)]);
    }

}

#include "holberton.h"
/**
*rot13 - change value using
*
*Return: int
*/
char *rot13(char *s)
{
int i = 0;
        for( i = 0; s[ i ] != '\0' ; i++ ){

            if( *( s + i ) >= 'a' && *( str + i ) < 'n')
                *( s + i ) += 13;       

            else if( *( str + i ) >= 'n' && *( str + i ) <= 'z')
                *( str + i ) -= 13;
        }
}

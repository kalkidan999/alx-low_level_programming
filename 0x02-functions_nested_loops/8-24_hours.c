#include "holberton.h"
/**
* jack_bauer - timing
*/
void jack_bauer(void)
{
int HourTen;
int Minute;
for (HourTen = 0; HourTen <= 23; HourTen++)
{
for (Minute = 0; Minute <= 59; Minute++)
{
_putchar('0' + (HourTen / 10));
_putchar('0' + (HourTen % 10));
_putchar(':');
_putchar('0' + (Minute / 10));
_putchar('0' + (Minute % 10));
_putchar ('\n');
}
}
}

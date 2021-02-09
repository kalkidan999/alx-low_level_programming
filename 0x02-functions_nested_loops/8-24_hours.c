#include "holberton.h"
/**
* jack_bauer - timing
*/
void jack_bauer(void)
{
int HourTen;
int HourOne;
int MinuteTen;
int Minuteone;
for (HourTen = '0'; HourTen <= '2'; HourTen++)
{
for (HourOne = '0'; HourOne <= '3'; HourOne++)
{
for (MinuteTen = '0'; MinuteTen <= '5'; MinuteTen++)
{
for (Minuteone = '0'; Minuteone <= '9'; Minuteone++)
{
if (MinuteTen == 5 && Minuteone == 9)
break;
else
{
_putchar (HourTen);
_putchar (HourOne);
_putchar (':');
_putchar (MinuteTen);
_putchar (Minuteone);
}
}
}
}
}
_putchar('\n');
}

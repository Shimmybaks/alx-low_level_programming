#include "main.h"
#include <stdio.h>


/**
 * jack_bauer - func that prints every minute of the day of Jack Bauer, starti
 * ng from 00:00 to 23:59, min loop counts mins, while hour loop counts hours
 * and resets mins
 * Return: 0
 */
void jack_bauer(void)
{
int hour = 0;
int minute = 0;

while (hour < 24)
{
printf("%02d:%02d", hour, minute);

minute++;

if (minute == 60)
{
minute = 0;
hour++;
}
}
}

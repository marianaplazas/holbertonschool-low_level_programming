#include "holberton.h"
/**
 *jack_bauer - print all the hours and minutes of a day
 *
 *Return: all the hours with minutes
 */
void jack_bauer(void)
{
	int hours;
	int minutes;

	hours = 0;

	while (hours <= 23)
	{
		minutes = 0;
		while (minutes <= 59)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes % 10 + '0');
			_putchar('\n');
			minutes++;
		}
		hours++;
	}
}

#include "main.h"
/**
 * times_table - prints the times table from 0 - 9
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int d, e, f;

	for (d = 0; d <= 9; d++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
	for (e = 1; e <= 9; e++)
	{
		f = (e * d);
	if ((f /10) > 0)
	{
		_putchar((f / 10) + '0');
	}
	else
	{
		_putchar(' ');
	}
		_putchar((f % 10) + '0');

	if (e < 9)
	{
		_putchar(',');
	      _putchar(' ');
	}
	}
	_putchar('\n');
	}

}

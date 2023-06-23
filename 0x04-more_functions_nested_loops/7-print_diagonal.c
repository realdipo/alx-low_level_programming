#include "main.h"
/**
 * print_diagonal - prints a diagonal shape
 * of / to the terminal for a number of times
 * @n: The number of time the shape /$ should be displayed
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		if (n > 1)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}

	if (n <= 0)
	{
		_putchar('\n');
	}



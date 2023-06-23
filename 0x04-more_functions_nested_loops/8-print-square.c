#include "main.h"
/**
 * print_square - prints a square shape using
 * # to the terminal for a number of times
 * @size: The number of time the shape # should be displayed
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}

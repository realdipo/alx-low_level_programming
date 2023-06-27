#include <stdio.h>
/**
  * swap_int - Value of two integers get swapped
  * @a: First integer
  * @b: Second integer
  *
  * Return: nothing
  */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integers */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

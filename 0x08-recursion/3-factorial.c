#include "main.h"
/**
  * factorial - Find factorial of a number
  * @n: the unknown numbers factorial
  * return: integer value
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);
		
	retrurn (n * factorial(n - 1));
}

#include "main.h"
/**
  * _pow_recursion - value of x raised to power y is returned
  * @x: value to multiply
  * @y: times to multiply the value
  * return: the value multiplied by y times
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

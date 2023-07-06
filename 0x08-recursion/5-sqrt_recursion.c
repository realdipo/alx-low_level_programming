#include "main.h"
#include <stdio.h>
int _sqrt (int n, int i);
/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: number to claculate the natural suare root
  * Return: the natural square root
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
  * _sqrt - claculate natural square root
  * @n: number to calculate the square root
  * @i: iterate number
  * return; the natural square root
  */
int _sqrt9(int n, int i)
{
	int sqrt = i * i;
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}

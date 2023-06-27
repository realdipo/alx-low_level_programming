#include <stdio.h>
/**
  * _strlen - Returns string length
  * @str: The unknown string
  * Return: The length of @str
  */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}

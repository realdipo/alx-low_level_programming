#include <unistd.h>

/**
  * _putchar - writes the character c to stdout
  *@c: Character to be printed
  *
  * Return: Alway 1 (Success)
  *on error, -1 is returned, and errno is set right
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

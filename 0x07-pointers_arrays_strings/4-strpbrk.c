#include "main.h"
#include <stdio.h>

/**
  * _strpbrk - Entry point
  * @s: input
  * @accept: input another
  * Return: always 0 (success)
  */
char *_strpbrk(char *s, char *accept)
{
	int i, n;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + 1);
		}
	}
	return (NULL);
}

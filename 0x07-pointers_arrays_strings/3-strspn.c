#include "main.h"
/**
  * _strspn - Entry point
  *@s: input
  * @accept: another input
  * Return: Always has to be 0 (success)
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value, check;
	value = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
				check = 1;
			}
		}
	}
}

#include <stdio.h>
/**
  *main - program prints all possible combinations of 2 digits
  *return: 0 (success)
 */
int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0' ; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			if (!((ones == tens) || (tens > ones)))
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))
				{
					putchar('.')
						putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
	return (0);

#include "main.h"
#include <stdio.h>
#include <stdio.h>

/**
  * malloc_checked - Allocated memory
  * @b: the size to allocated size
  * return: nothing
  */
void *malloc_checked(unsigned int b);
{
	void *p;
	p = malloc(b);
	if (p == NULL)
		exit (98);
	return (p);
}

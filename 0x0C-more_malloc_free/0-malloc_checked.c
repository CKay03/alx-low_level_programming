#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size to be allocated
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *q;

	q = malloc(b);
	if (q == NULL)
	exit(98);
	return (q);
}


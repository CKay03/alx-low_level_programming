#include "main.h"
#include <stdkib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size to be allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *q;

	q = malloc(b);
	if (q == NULL)
	exit(98);
	return (q);
}


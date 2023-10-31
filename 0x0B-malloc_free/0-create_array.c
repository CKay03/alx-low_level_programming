#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of array
 * @c: the char to fill in the array
 *
 * Return: the array filled
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *q;

	if (size == 0)
	return (NULL);
	q = malloc(size * sizeof(char));
	if (q == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
	{
	q[i] = c;
	}
	return (q);
}

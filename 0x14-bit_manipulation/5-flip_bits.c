#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another number
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, cbit = 0;
	unsigned long int present;
	unsigned long int exc = n ^ m;

	for (i = 63; i >= 0; i--)
	{
	present = exc >> a;
	if (present & 1)
	cbit++;
	}

	return (cbit);
}

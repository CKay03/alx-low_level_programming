#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 1, b = 2, c, count = 2;

	printf("%d, %d, ", a, b);

	while (count < 98)
	{
	c = a + b;
	if (count < 97)
	{
	printf("%d, ", c);
	}
	else
	{
	printf("%d\n", c);
	}

	a = b;
	b = c;

	count++;
	}

	return (0);
}

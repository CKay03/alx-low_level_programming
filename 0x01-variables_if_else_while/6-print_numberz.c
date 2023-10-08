#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always: 0 (Success)
 */
int main(void)
{
	for (int i = 0; i <= 9; i++)
	{
	putchar(i + '0');
	if (i < 9)
	{
	putchar('\n');
	}
	}

	return (0);
}

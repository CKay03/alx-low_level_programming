#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always: 0 (Success)
 */
int main(void)
{
	putchar('0');

	for (int i = 1; i <= 9; i++)
	{
		putchar('\n');
		putchar('0' + i);
	}


	return (0);
}


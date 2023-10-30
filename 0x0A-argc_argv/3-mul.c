#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0, j = 0;

	if (argc == 3)
	{
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", i * j);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}

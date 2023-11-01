#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of your prog
 * @ac: argument vector
 * @av: argument vector
 * Return: the pointer z
 */
char *argstostr(int ac, char **av)
{
	int h = 0, i = 0, j = 0, k = 0;
	char *z;

	if (ac == 0 || av == NULL)
	return (NULL);
	while (i < ac)
	{
	while (av[i][j])
	{
	h++;
	j++;
	}
	j = 0;
	i++;
	}
	z = malloc((sizeof(char) * h) + ac + 1);
	i = 0;
	while (av[i])
	{
	while (av[i][j])
	{
	z[k] = av[i][j];
	k++;
	j++;
	}
	z[k] = '\n';
	j = 0;
	k++;
	i++;
	}
	k++;
	z[k] = '\0';
	return (z);
}

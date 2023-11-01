#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: the string to duplicate
 * Return: the string duplicated
 */
char *_strdup(char *str)
{
	int q = 0, i = 1;
	char *v;

	if (str == NULL)
	return (NULL);
	while (str[i])
	{
	i++;
	}
	v = malloc((sizeof(char) * i) + 1);
	if (v == NULL)
	return (NULL);
	while (q < i)
	{
	v[q] = str[q]
	q++;
	}
	v[q] = '\0';
	return (v);
}

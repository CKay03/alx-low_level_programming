#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *v;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[i])
	i++;
	while (s2[j])
	j++;
	l = i + j;
	v = malloc((sizeof(char) * l) + 1);
	if (v == NULL)
	return (NULL);
	j = 0;
	while (k < l)
	{
	if (k <= i)
	v[k] = s1[k];
	if (k >= i)
	{
	v[k] = s2[j];
	j++;
	}
	k++;
	}
	v[k] = '\0';
	return (v);
}


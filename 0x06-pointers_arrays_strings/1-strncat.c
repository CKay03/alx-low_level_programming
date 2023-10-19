#include "main.h"

/**
 * _strncpy - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	while (n > 0 && *src != '\0')
	{
	*p++ = *src++;
	n--;
	}
	while (n > 0)
	{
	*p++ = '\0';
	n--;
	}
	return (dest);
}

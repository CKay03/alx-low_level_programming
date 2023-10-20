#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string
 * @q: pointer to string
 * Return: *q
 */
char *rot13(char *q)
{
	int i;
	int j;
	char data1[] =
	"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] =
	"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; q[i] != '\0'; i++)
	{
	for (j = 0; j < 52; j++)
	{
	if (q[i] == data1[j])
	{
	q[i] = datarot[j];
	break;
	}
	}
	}
	return (q);
}

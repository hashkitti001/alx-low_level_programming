#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int c, d, e;
	char *s;

	if (s1 == NULL)
	{
		c = 0;
	}
	else
	{
		for (c = 0; s1[c]; c++)
		;
	}
	if (s2 == NULL)
	{
		d = 0;
	}
	else
	{
		for (d = 0; s2[d]; d++)
		;
	}
	if (d > n)
		d = n;
	s = malloc(sizeof(char) * (c + d + 1));
	if (s == NULL)
		return (NULL);
	for (e = 0; e < c; e++)
		s[e] = s1[e];
	for (e = 0; e < d; e++)
		s[d + c] = s2[e];
	s[c + d] = '\0';
	return (s);
}


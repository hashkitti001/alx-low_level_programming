#include <stdio.h>

/**
 * _strncpy - Copies at most 'n' bytes of the source string to the destination string
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to copy from src
 *
 * Return: Pointer to the resulting string 'dest'
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy at most 'n' bytes of the source string to the destination string */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Fill the remaining bytes of the destination string with null characters */
	for (; i < n; i++)
		dest[i] = '\0';

	return dest;
}



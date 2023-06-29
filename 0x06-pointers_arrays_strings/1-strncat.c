#include <stdio.h>

/**
 * _strncat - Concatenates two strings, using at most 'n' bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to concatenate from src
 *
 * Return: Pointer to the resulting string 'dest'
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;

	/* Find the end of the destination string */
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	/* Append the source string to the destination string */
	while (*src_ptr != '\0' && n > 0)
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
		n--;
	}

	/* Add a terminating null byte to the concatenated string */
	*dest_ptr = '\0';

	return (dest);
}

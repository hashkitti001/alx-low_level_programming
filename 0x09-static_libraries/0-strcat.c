#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: Pointer to the resulting string 'dest'
 */
char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;
	char *src_ptr = src;

	/* Find the end of the destination string */
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	/* Append the source string to the destination string */
	while (*src_ptr != '\0')
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
	}

	/* Add a terminating null byte to the concatenated string */
	*dest_ptr = '\0';

	return (dest);
}

#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array of @nmemb elements of
 * @size bytes each and returns a pointer to the allocated memory.
 * @nmemb: allocates memory for array
 * @size: allocates element of size bytes to array
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arrptr;
	unsigned int d;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arrptr = malloc(nmemb * size);
	if (arrptr == NULL)
		return (NULL);
	for (d = 0; d < (nmemb * size); d++)
		arrptr[d] = 0;
	return (arrptr);
}

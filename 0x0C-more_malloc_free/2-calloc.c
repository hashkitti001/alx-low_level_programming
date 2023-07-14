#include "main.h"
#include <stdlib.h>
/**
 * calloc - Allocates memory for an array
 * @nmemb: nearest member in unsigned int type
 * @size: size of array
 * Return: NULL or pointer to array
 *
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *pointer;

unsigned int c;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
else
{
int dim = nmemb * size;

pointer = malloc(dim);
for (c = 0; c < dim; c++)
{
pointer[c] = 0;
}
return (pointer);
}
}

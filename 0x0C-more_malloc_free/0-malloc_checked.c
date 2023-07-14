#include "main.h"
#include <stdlib.h>
#define ERRNO 98
/**
 * malloc_checked - Allocates memory of magnitude/size b
 * @b: Size of memory allocated
 * Return: Pointer or 98
 *
*/
void *malloc_checked(unsigned int b)
{
void *q;
q = malloc(b);
if (q == NULL)
{
exit(ERRNO);
}
else
{
return (q);
}
}

#include "main.h"
#include <stdlib.h>
/**
 * array_range - Returns a pointer to  a generated array of numbers
 * @min: Lower bound
 * @max: Upper bound
 * Return: pointer or NULL
 *
*/
int *array_range(int min, int max)
{
int *numptr, size, j = 0;

size = max - min + 1;
numptr = malloc(sizeof(int) * size);
if (min > max || numptr == NULL)
{
return (NULL);
}
else
{
for (j = 0; min <= max; j++)
{
numptr[j] = min++;
}
}
return (numptr);
}

#include <stdio.h>

int linear_search(int *array, size_t size, int value)
{
if (array == NULL)
{
	return -1;
}
	size_t i;
	for (i = 0; i < size; i++)
	{
		printf("Comparing array[%zu] = %d\n", i, array[i]);
		if ((array[i] == value))
		{
    			return i;
		}
	}
    	return -1;
}

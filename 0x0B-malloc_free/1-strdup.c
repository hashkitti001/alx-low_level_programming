#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Returns a pointer to a new string which is a clone
 * @str: a string
 * Return: NULL or ar
*/
char *_strdup(char *str)
{
	char *pointer;

	if (str == NULL)
		return (NULL);
	pointer = malloc(sizeof(char));
	return (pointer);
}

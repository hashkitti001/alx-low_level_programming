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

	int j, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	pointer = (char *)malloc(sizeof(char) * len + 1);
	if (pointer == NULL)
		return (NULL);
	for (j = 0; j < len; j++)
		pointer[i] = str[i];
	copy[len] = '\0';

	return (pointer);
}

#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Frees the memory of a linked list
 * @head: pointer to a list_t linked list
 * Return: nothing
*/
void free_list(list_t *head)
{
 if (head)
	{
	free(head->next);
	if (head->str)
		free(head->str);
	free(head);
	}
}

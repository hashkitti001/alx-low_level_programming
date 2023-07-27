#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: Linked list
 * Return: number of elements in list
*/
size_t list_len(const list_t *h)
{
int numElems = 0;

while (h != NULL)
	{
	numElems++;
	h = h->next;
	}
return (numElems);
}

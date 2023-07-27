#include "lists.h"
/**
 * print_list - Prints the elements of a linked list
 * @h: linked list to be printed
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
int ct = 0;
while (h)
{
	if (h->str == NULL)
		{
		printf("[0] (nil)");
		}
	else
	{
	printf("[%d] %s\n", h->len, h->str);
	}
	ct++;
	h = h->next;
}
return (ct);
}

#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Prints a name
 * @name: name to print
 * @f: function of name
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
	f(name);
}

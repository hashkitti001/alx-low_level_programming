#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints a set of strings seperated by a seperator
 * @seperator: seperator value
 * @n: number of strings
 * Return: void;
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
char *str;
unsigned int i;
va_list ap;

va_start(ap, n);
if (seperator == NULL)
	{
	seperator = "";
	}
for (i = 0; i < n; ++i)
	{
	vals = va_arg(ap, char *);
	if (str == NULL)
		{
		vals = "(nil)";
		}
	printf("%s", vals);
	if (i < n - 1)
		{
		printf("%s", seperator);
		}
	}
printf("\n");
va_end(ap);
}

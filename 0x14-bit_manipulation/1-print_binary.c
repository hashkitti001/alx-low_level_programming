#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n: decimal number
 * Return:integer
*/
void print_binary(unsigned long int n)
{
if (n == 0)
{
return (0);
}
else if (n == 1)
{
return (1);
}
else
{
return ((n % 2) + 10 * print_binary(n / 2));
}
}

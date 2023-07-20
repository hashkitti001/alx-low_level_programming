#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - Prints the sum of a function with var args
 * @n: Argument one
 * Return: void
*/
int sum_them_all(const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...)
{
int i, sum = 0;

if (n == 0)
{
return (0);
}
va_list args;
va_start(args, n);
for (i = 0; i < n; ++i)
{
int y = va_arg(args, int);
sum += y;
}
sum += n;
printf("%d", sum);
va_end(args);
}

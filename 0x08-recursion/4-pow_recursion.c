#include "main.h"
/**
 * _pow_recursion - function recursive
 * @x: Integer
 * @y: Integer
 * Return: result
*/
int _pow_recursion(int x, int y)
{
int powered;
if (y < 0)
{
return (-1);
}
else 
{
powered = x * _pow_recursion(x, y - 1);
}
return (powered);
}

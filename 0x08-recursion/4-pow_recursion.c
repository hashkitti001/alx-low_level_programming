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
if (y > 0)
{
	powered = x * _pow_recursion(x, y - 1);
}
else
{
	result = (y == 0) ? 1 : -1;
}
return (powered);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase without q and e
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	for(char ch = 'a'; ch <= 'z'; ch++)
	{
	if(ch != 'e' && ch != 'q')
	{
	putchar(ch);
	}
	}
	putchar('\n');
	return (0);
}
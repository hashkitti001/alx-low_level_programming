#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all alphabet letters in lowecase and uppercase
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'Z')
	{
	putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}

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

	char CH = 'A';

	while (ch <= 'z')
	{
	putchar(ch);
	ch++;
	}
	while (CH <= 'Z')
	{
	putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}

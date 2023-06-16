#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the numerals of Base 16
 *
 * Return: Always O (Success)
*/
int main(void)
{
	 int i = 0;

	char CH = 'A';

	for (i = 0; i <= 9; i++)
	{
	putchar(i + '0');
	}
	while (CH < 'G')
	{
	putchar(CH);
	CH++;
	}
	putchar('\n');
	return (0);
}


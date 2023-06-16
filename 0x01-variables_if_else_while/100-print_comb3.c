#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different
 *           combinations of two digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0, j;

	for (i = 0; i <= 9; i++)
	{
		j = 0;
		for (j = 0; j <= 9; j++)
		{
			if (i != j && i <= j)
			{
				putchar(i + '0');
				putchar(j + '0');

				if (i != '8' && i != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}	
		}
	}
	putchar('\n');

	return (0);
}

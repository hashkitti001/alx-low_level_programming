#include "main.h"
/**
 * print_alphabet - prints the alphabet
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
char ch = 'a';
int i; 
for(i = 0; i < 11; i++)
{
while (ch <= 'z')
{
        _putchar(ch);
        ch++;
}
}
        _putchar('\n');
}


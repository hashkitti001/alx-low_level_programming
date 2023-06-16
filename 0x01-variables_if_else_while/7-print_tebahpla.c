#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the alphabet in reverse
 *
 * Return: Always O (Success)
*/
int main(void)
{
        char ch = 'z';

        while (ch >= 'a')
        {
        putchar(ch);
        ch--;
        }
        putchar('\n');
        return (0);
}


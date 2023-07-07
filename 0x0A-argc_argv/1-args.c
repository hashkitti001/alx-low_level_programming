#include <stdio.h>
/**
 * main - Prints the argument count of a program
 * @argc: Argument count
 * @argv: Arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}

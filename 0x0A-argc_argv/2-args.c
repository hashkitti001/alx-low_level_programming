#include <stdio.h>
/**
 * main - Prints all arguments of a program
 * @argc: Argument count
 * @argv: Arguments
 * Return: 0
 *
*/
int main(int argc, char **argv)
{
int i = 0;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

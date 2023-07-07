#include <stdio.h>
/**
 * main - Prints the multiplication of two integers
 * @argc: argument count
 * @argv: arguments
 * Return: 0
*/
int main(int argc, char **argv)
{
if(argc - 1 < 2)
{
printf("Error");
return (1);
}
else
{
printf("%d\n", argv[1] * argv[2])
return (0);
}
}

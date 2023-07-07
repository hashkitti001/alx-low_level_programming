#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the multiplication of two integers
 * @argc: argument count
 * @argv: arguments
 * Return: 0
*/
int main(int argc, char **argv)
{
int j, k;
if (argc  < 3)
{
printf("Error");
return (1);
}
else
{
j = atoi(argv[1]);
k = atoi(argv[2]);
printf("%d\n", j *k);
return (0);
}
}

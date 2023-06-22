#include <stdio.h>
/**
 * main - function main of multiples numbers of 3 or 5
 *
 * Return: 0
 */
int main(void)
{
int i = 1; 
for(i = 1; i < 101; i++)
{
if(i % 3 == 0 && i % 5 != 0){
puts("Fizz");
}
else if(i % 5 == 0 && i % 3 != 0)
{
puts("Buzz");
} 
else if (i % 15 == 0)
{
puts("FizzBuzz");
}
else
{
printf("%d\n", i);
}         			
}
return(0);
}

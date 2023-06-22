#include <stdio.h>
int main (void)
{
long int i, num;

num = 612852475143;
	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			num = num / i;
			i--;
		}
	}
	printf("%li\n", i);
return (0);
}

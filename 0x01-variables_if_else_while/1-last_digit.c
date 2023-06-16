#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: print the value of n status:
 *              greater than, is zero and is not less than 6.
 *
 * Return: Always O (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastDigit = n % 10;

	if (lastDigit > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}
	else if (lastDigit == 0)
{
	printf("Last digit of %d is zero\n", n);

}
	else if (lastDigit < 6 && lastDigit != 0)
{
	printf("Last digit of %d is %d and is less than 6 amd not 0\n", n, lastDigit);
}
	return (0);
}

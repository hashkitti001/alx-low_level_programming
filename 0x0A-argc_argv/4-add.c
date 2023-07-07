#include <stdio.h>

int main(int argc, char **argv)
{
int j, k, sum = 0;
	char *total;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (j = 1; argv[j]; j++)
	{
		k = strtol(argv[j], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			total += k;
		}
	}
	printf("%d\n", total);
}

#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: 0 always
 */
int main(void)
{
	unsigned long int sum1, sum2, sum;
	int i;

	sum1 = 0;
	sum2 = 0;
	sum = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sum1 = sum1 + i;
		} else if ((i % 5) == 0)
		{
			sum2 = sum2 + i;
		}
	}
	sum = sum1 + sum2;
	printf("%lu\n", sum);
	return (0);
}


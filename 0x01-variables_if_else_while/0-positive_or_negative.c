#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- main entry
 * Return: 0 always(success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND-MAX / 2;

	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is negative", n);
	}
	else if (n < 0)
	{
		printf("%d" is zero);
	}
	return (0);
}

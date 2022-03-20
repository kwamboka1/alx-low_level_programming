#include <stdio.h>
/**
 * main - Prints out the first 50 Fibonnaci numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	long int j = 1;
	long int k = 1;
	long int sum;

	printf("%d", 1);
	for (i = 1; i < 50; i++)
	{
		sum = j + k;
		printf(", %ld", sum);
		j = k;
		k = sum;
	}

	printf("\n");

	return (0);
}

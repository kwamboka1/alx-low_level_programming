#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * user input's number prints to 98, regardless < 98 or > 98
 * @z: number input
 * Return: Always 0 (Success)
 */
void print_to_98(int z)
{
	if (z < 98)
	{
		while (z <= 98)
		{
			printf("%d", z);
			if (z != 98)
			{
				printf(", ");
			}
			z++;
		}
	}
	else if (z > 98)
	{
		while (z >= 98)
		{
			printf("%d", z);
			if (z != 98)
			{
				printf(", ");
			}
			z--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}

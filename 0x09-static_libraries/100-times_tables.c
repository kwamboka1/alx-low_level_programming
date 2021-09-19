#include "holberton.h"

/**
 * print_times_table - Prints the n times table
 *
 * @n: number times table (0 < n <= 15)
 *
 * Return: no return
 */
void print_times_table(int n)
{
	int a, b, oper;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				oper = a * b;
				_putchar(44);
				_putchar(32);
				if (oper <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(oper + 48);
				}
				else if (oper <= 99)
				{
					_putchar(32);
					_putchar((oper / 10) + 48);
					_putchar((oper % 10) + 48);
				}
				else
				{
					_putchar(((oper / 100) % 10) + 48);
					_putchar(((oper / 10) % 10) + 48);
					_putchar((oper % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}

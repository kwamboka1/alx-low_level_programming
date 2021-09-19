#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * red = row, con = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int red, con, d;

	for (red = 0; red <= 9; red++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (con = 1; con <= 9; con++)
		{
			d = (red * con);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (con < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}

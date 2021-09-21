#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int y, cha;

	for (y = 0; y < 10; y++)
	{
		for (cha = 0; cha < 15; cha++)
		{
			if (cha >= 10)
				_putchar((cha / 10) + 48);
			_putchar((cha % 10) + 48);
		}
		_putchar('\n');
	}
}

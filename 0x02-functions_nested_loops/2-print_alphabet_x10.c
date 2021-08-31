#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
int main(void)
{
	int w, count;

	count = 0;

	while (count < 10)
	{
		for (w = 'a'; w <= 'z'; w++)
		{
			_putchar(w);
		}
		count++;
		_putchar('\n');
		return (0);
	}
}

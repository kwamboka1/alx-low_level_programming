#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
        int y;

        for (y = 'a'; y <= 'z'; y++)
        {
                _putchar(y);
        }
        _putchar('\n');
}

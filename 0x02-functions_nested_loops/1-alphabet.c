#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
int lowerc;

for (lowerc = 'a'; lowerc <= 'z'; lowerc++)
putchar(lowerc);
putchar('\n');

return (0);
}

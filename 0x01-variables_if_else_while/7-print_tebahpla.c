#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char _back;

for (_back = 'z'; _back >= 'a'; _back--)
putchar(_back);
putchar('\n');

return (0);
}

#include <stdio.h>

/**
 *bmain - the function to be executed before main
 *
 *Return: no return.
 */

void __attribute__((constructor)) bmain()
{
	printf("You are beat! and yet, you must allow, \nI bore my house upon my back!\n");
	
}

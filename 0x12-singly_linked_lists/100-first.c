#include <stdio.h>

/**
 * pmain - function to be executed before main.
 */
void __attribute__((constructor)) pmain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

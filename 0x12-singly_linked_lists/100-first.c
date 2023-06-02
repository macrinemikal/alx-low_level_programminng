#include <stdio.h>

void pfirst(void) __attribute__ ((constructor));

/**
 * pfirst - prints a sentence before the main
 * function is executed
 */
void pfirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

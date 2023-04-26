#include "main.h"

/**
 * int _islower - checks for lowercase character and returns 1 if c is lowercase otherwise return 0.
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <='z')
		return (1);
	else
		return (0);
}

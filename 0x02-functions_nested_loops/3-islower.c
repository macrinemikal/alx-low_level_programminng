#include "main.h"

/**
 * int _islower - checks for lowercase character
 * Return: returns 1 if c is lowercase otherwise return 0.
 * @c: is the character to be checked.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

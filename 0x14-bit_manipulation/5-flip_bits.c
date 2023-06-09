#include "main.h"

/**
 * flip_bits - returns the number of bits to be changed
 * from one to another
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits to be change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		current = exclusive >> k;
		if (current & 1)
			count++;
	}

	return (count);
}

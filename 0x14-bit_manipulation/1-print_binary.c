#include "main.h"

/**
 * print_binary - prints the binary representation of a num
 * @n: number to be printing in binary
 */
void print_binary(unsigned long int n)
{
	int k, count = 0;
	unsigned long int current;

	for (k = 63; k >= 0; k--)
	{
		current = n >> k;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

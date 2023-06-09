#include "main.h"

/**
 * get_bit - returns value of a bit at a index in a number
 * @n: number
 * @index: index to be checked
 *
 * Return: value of the bit
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_num;

	if (index > 63)
		return (-1);

	bit_num = (n >> index) & 1;

	return (bit_num);
}

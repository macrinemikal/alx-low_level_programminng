#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @x: array name
 * @n: is the number of elements of array to be printed
 * Return: x and n
 */
void print_array(int *x, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", x[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", x[n - 1]);
		}
			printf("\n");
}

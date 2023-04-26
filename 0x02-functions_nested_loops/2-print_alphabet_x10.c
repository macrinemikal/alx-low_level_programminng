#include "main.h"

/**
 * main - prints 10 times the alphabet in lowercase.
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char kk;
	int n;

	n = 0;

	while (n < 10)
	{
		kk = 'a';
		while (kk <= 'z')
		{
			_putchar(kk);
			kk++;
		}
		_putchar('\n');
		n++;
	}
}

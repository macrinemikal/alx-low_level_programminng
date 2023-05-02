#inlude "main.h"
/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s: string to be reversed.
 * return: 0
 */
void print_rev(char *s)
{
	int miki = 0;
	int o;

	while (*s != '\0')
	{
		miki++;
		s++;
	}
	s--;
	for (o = miki; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

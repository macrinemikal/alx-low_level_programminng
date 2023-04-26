#inlude "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int l, w, h;

	for (l =  0; l < 10; l++)
	{
		for (w = 0; w < 10; w++)
		{
			h = w * l;
			if (w == 0)
			{
				_putchar (h + '0');
			}
			if (h < 10 && w != 0)
			{
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
				_putchar (h + '0');
			}else if (h <= 10)
			{
				_putchar (',');
				_putchar (' ');
				_putchar ((h / 10) + '0');
				_putchar ((h % 10) + '0');
			}
		}
		_putchar ('\n');
	}
}

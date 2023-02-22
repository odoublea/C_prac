#include "main.h"

void jack_bauer(void)
{
	int i = 0;

	while (i <= 24)
	{
		int j = 0;
		_putchar(i);
                _putchar('0');
                _putchar(':');

		while(j <= 59)
		{
			_putchar(j);
			_putchar('0');
			j++;
		}

		i++;
	}
}


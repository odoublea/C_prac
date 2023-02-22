#include "main.h"

int print_last_digit(int n)
{
	int x = n % 10;
	if (n < 0)
	{
		x = x * -1;
	}
	_putchar(x + '0');
	return x;
}

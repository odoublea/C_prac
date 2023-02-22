#include "main.h"

void print_alphabet_x10(void)
{
        int i = 0;

        while (i < 11)
        {
		char j = 97;
		while ( j <= 122)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
                i++;
        }
	return;
}

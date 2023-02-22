#include <stdio.h>

int main(void)
{
	int i;

	for (i = 0x30; i < 0x3A; i++)
	{
		putchar(i);
		if (i != 0x39)
		{
			putchar(0x2C);
			putchar(0x20);
		};
	};

	putchar('\n');
	return (0);
}

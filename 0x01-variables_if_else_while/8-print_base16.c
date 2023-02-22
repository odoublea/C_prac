#include <stdio.h>

int main(void)
{
	int i;
	int j;

	for (i = 0x30; i < 0x3A; i++)
	{
		putchar(i);
	};

	for (j = 0x61; j < 0x67; j++)
	{
		putchar(j);
	};
	putchar('\n');
	return (0);
}

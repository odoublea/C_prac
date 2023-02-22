#include <stdio.h>

int main(void)
{
	int i;
	int j;

	for (i = 48; i < 57; i++)
	{
		for (j = 49; j < 58; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57)
					break;
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}

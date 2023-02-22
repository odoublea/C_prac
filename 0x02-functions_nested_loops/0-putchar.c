#include <stdio.h>
#include "main.h"
/*
 *
 *
 */
#define MAX 10
int main(void)
{
	char word[] = "_putchar";
	int i = 0;

	while ( i < MAX )
	{
		if (word[i] != '\0')
		{
			_putchar(word[i]);
		}
		else
		{
			_putchar('\n');
			break;
		}
		i++;
	}
	return 0;
}

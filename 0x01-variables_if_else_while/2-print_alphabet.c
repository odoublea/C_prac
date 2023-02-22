#include <stdio.h>

/*
 * main: prints alphabet in lowercase
 * return: 0 (success)
 */
int main(void)
{
	char ch;
	ch = 'a';

	while (ch < '{') {
		putchar(ch);
		ch++;
	};
	putchar('\n');
	return (0);
}

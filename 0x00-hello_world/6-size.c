#include <stdio.h>

/*
 * main: return the sizes of data types
 * return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)\n",(long int)sizeof(a));
	printf("Size of an int: %lu byte(s)\n",(long int)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n",(long int)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n",(long int)sizeof(d));
	printf("Size of a float: %lu byte(s)\n",(long int)sizeof(e));

	return (0);
}

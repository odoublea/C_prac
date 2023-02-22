#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/*
 * main: returns random num of variable n
 * n: unsigned int
 * return: 0
 */
void positive_or_negative(int n)
{

	if (n > 0) {
		printf("%d is positive\n", n);
	} else if (n == 0){
		printf("%d is zero\n", n);
	} else {
		printf("%d is negative\n", n);
	};
	return;
}

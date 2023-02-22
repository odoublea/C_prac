#include <stdio.h>

void add(int *x);

int main(void)
{
	int a = 24;
	add(&a);
	printf("a: %d\n", a);

	return 0;
}

void add(int *x)
{
	*x = *x + 24;
}

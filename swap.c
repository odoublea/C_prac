#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
	int x = 5;
	int y = 10;

	printf("x:%d , y:%d\n", x, y);
	swap(&x, &y);
	printf("x:%d , y:%d\n", x, y);

	return(0);
}

void swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

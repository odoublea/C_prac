#include <stdio.h>

int main(void)
{
	int i;
	double j;
	char k;

	printf("The size of int in my machine is %lu \n", (unsigned long)sizeof(i));
	printf("The size of double in my machine is %lu \n", (unsigned long)sizeof(j));
	printf("The size of char in my machine is %ld \n", (unsigned long)sizeof(k));

	return(0);
}

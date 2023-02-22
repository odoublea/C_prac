#include <stdio.h>

int main(void)
{
	char f, l;
	int age;
	
	printf("Please enter your initials. Followed by you age: ");
	scanf("%c %c %d", &f, &l, &age);
	printf("My initials are: %c %c and my age is %d. \n", f, l, age);
	return(0);
}

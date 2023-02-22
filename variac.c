#include <stdarg.h>
#include <stdio.h>

void printWithType(const char* typdef, ...)
{
	va_list args;
	va_start(args, typdef);

	/* iterate on typdef and print accordingly what I want */
	while (*typdef != '\0')
	{
		if (*typdef == 'i')
		{
			int val = va_arg(args, int);
			printf("This is int: %d\n", val);
		}
		else if (*typdef == 'd')
		{
			double val = va_arg(args, double);
                        printf("This is int: %f\n", val);
		}
		else
		{
			int val = va_arg(args, int);
                        printf("This is int: %c\n", val);
		}
		++typdef;
	}

	va_end(args);
}

int main(void)
{
	printWithType("iiddc", 4,5,3.6,4.5,'a');
	return (0);
}
